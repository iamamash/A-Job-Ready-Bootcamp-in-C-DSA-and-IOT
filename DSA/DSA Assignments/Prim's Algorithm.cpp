#include <iostream>
#include <vector>
using namespace std;
#define MAX 20
#define TEMP 0
#define PERM 1
#define INFINITY 9999
#define NIL -1

vector<vector<int>> adj(MAX, vector<int>(MAX));
vector<int> predecessor(MAX);
vector<int> cost(MAX);
vector<int> status(MAX);
int nodes;

class Prims
{
public:
    void createGraph()
    {
        int maxEdges, source, destination, wt;
        cout << "How many nodes you want to enter : ";
        cin >> nodes;
        maxEdges = (nodes * (nodes - 1)) / 2; // For Undirected Graph

        for (int i = 1; i <= maxEdges; i++)
        {
            cout << "You can enter (-1, -1) to exit \n\nEnter source vertex : ";
            cin >> source;
            cout << "Enter destination vertex : ";
            cin >> destination;

            if (source == -1 && destination == -1)
                break;
            if (source < 0 || destination < 0 || source >= nodes || destination >= nodes)
            {
                cout << "Invalid Edge !!" << endl;
                --i;
            }
            else
            {
                cout << "Enter weight for this edge : ";
                cin >> wt;

                adj[source][destination] = wt;
                adj[destination][source] = wt;
            }
        }
    }

    void display()
    {
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < nodes; j++)
                cout << adj[i][j] << " ";

            cout << endl;
        }
    }

    int minCost()
    {
        int min = INFINITY, index = NIL;
        for (int i = 0; i < nodes; i++)
            if (status[i] == TEMP && cost[i] < min)
            {
                min = cost[i];
                index = i;
            }

        return index;
    }

    void prims(int source, vector<vector<int>> &edges)
    {
        int current, count = 0;

        predecessor.assign(MAX, NIL);
        cost.assign(MAX, INFINITY);
        status.assign(MAX, TEMP);

        cost[source] = 0;

        while (1)
        {
            current = minCost();
            if (current == NIL)
            {
                if (count == nodes - 1)
                    return;
                else
                {
                    cout << "This graph is disconnected hence no spanning tree is possible" << endl;
                    exit(0);
                }
            }

            status[current] = PERM;
            if (current != source)
            {
                edges[count][0] = predecessor[current];
                edges[count][1] = current;
                count++;
            }

            for (int i = 0; i < nodes; i++)
                if (adj[current][i] != 0 && status[i] == TEMP)
                    if (adj[current][i] < cost[i])
                    {
                        predecessor[i] = current;
                        cost[i] = adj[current][i];
                    }
        }
    }
};

int main()
{
    Prims pm;
    pm.createGraph();
    pm.display();

    cout << endl;

    int source, totalWt = 0;
    vector<vector<int>> edges(nodes - 1, vector<int>(2));
    cout << "Enter source vertex : ";
    cin >> source;

    if (source < 0 || source >= nodes)
        cout << "Invalid Source Vertex" << endl;

    pm.prims(source, edges);

    cout << "All the edges of Minimum spanning tree are : " << endl;
    for (int i = 0; i < edges.size(); i++)
    {
        cout << edges[i][0] << " -> " << edges[i][1] << endl;
        totalWt += adj[edges[i][0]][edges[i][1]];
    }
    cout << "Total Weight of Minimum Spanning Tree is : " << totalWt << endl;

    return 0;
}
