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

class Dijkstra
{
public:
    void createGraph()
    {
        int maxEdges, source, destination, wt;
        cout << "How many nodes you want to enter : ";
        cin >> nodes;
        maxEdges = nodes * (nodes - 1);

        for (int i = 0; i < maxEdges; i++)
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

    void dijkstra(int source)
    {
        int current;

        predecessor.assign(MAX, NIL);
        cost.assign(MAX, INFINITY);
        status.assign(MAX, TEMP);

        cost[source] = 0;

        while (1)
        {
            current = minCost();
            if (current == NIL)
                return;
            status[current] = PERM;

            for (int i = 0; i < nodes; i++)
                if (adj[current][i] != 0 && status[i] == TEMP)
                    if (cost[current] + adj[current][i] < cost[i])
                    {
                        predecessor[i] = current;
                        cost[i] = cost[current] + adj[current][i];
                    }
        }
    }

    void findPath(int source, int destination)
    {
        int count = 0, shortestPath = 0, pred;
        vector<int> path(nodes);
        while (source != destination)
        {
            path[++count] = destination;
            pred = predecessor[destination];
            shortestPath += adj[pred][destination];
            destination = pred;
        }

        cout << "Path is : " << source << "->";
        for (int i = count; i > 0; i--)
        {
            cout << path[i];
            if (i != 1)
                cout << "->";
        }

        cout << "\n\nShortest path b/w " << source << " & " << path[1] << " costs : " << shortestPath;
    }
};

int main()
{
    Dijkstra dj;
    dj.createGraph();
    dj.display();

    cout << endl;

    int source, destination;
    while (1)
    {
        cout << "Source vertex : ";
        cin >> source;
        if (source < 0 || source >= nodes)
            cout << "Invalid Source Vertex" << endl;
        else
        {
            dj.dijkstra(source);
            break;
        }
    }

    while (1)
    {
        cout << "Enter destination (-1 for exit) vertex : ";
        cin >> destination;

        if (destination == -1)
            break;
        else if (destination < 0 || destination >= nodes)
            cout << "Invalid Destination Vertex" << endl;
        else if (destination == source)
            cout << "Source & Destination can't be same" << endl;
        else if (cost[destination] == INFINITY)
            cout << "There's no edge exists b/w " << source << " & " << destination << endl;
        else
            dj.findPath(source, destination);

        cout << endl;
    }

    return 0;
}
