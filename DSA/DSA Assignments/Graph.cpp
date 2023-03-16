// ADJACENCY MATRIX
#include <iostream>
using namespace std;
class graph
{
private:
    int adj[20][20] = {0};

public:
    void add()
    {
        int E, u, v, directed = 1;
        cout << "How many Edges you want to enter : ";
        cin >> E;

        cout << "Enter 1 if graph is directed else 0 : ";
        cin >> directed;

        for (int i = 0; i < E; i++)
        {
            cout << "Enter the source and destination vertex : ";
            cin >> u >> v;

            adj[u][v] = 1;
            if (!directed)
                adj[v][u] = 1;
        }
    }

    void print()
    {
        cout << "\nFollowing are the edges between the vertices : ";
        for (int i = 1; i < 20; i++)
            for (int j = 1; j < 20; j++)
                if (adj[i][j] == 1)
                    cout << "( " << i << ", " << j << " ) ";
    }
};

int main()
{
    graph g;

    g.add();
    g.print();

    return 0;
}

// ADJACENCY LIST
#include <iostream>
#include <vector>
using namespace std;
class GRAPH
{
private:
    vector<int> adj[5];

public:
    void add(int u, int v, int directed)
    {
        adj[u].push_back(v);
        if (!directed)
            adj[v].push_back(u);
    }

    void print()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Adjacency list of vertex " << i << " is : \nhead ";
            for (auto v : adj[i])
                cout << " -> " << v;

            cout << endl
                 << endl;
        }
    }
};

int main()
{
    GRAPH G;
    G.add(0, 1, 1);
    G.add(0, 4, 1);
    G.add(1, 0, 1);
    G.add(2, 1, 1);
    G.add(4, 1, 1);
    G.add(1, 2, 1);
    G.add(3, 4, 1);
    G.add(3, 1, 1);
    G.add(4, 0, 1);
    G.add(2, 3, 1);
    G.add(3, 2, 1);
    G.add(1, 3, 1);
    G.add(1, 4, 1);
    G.add(4, 3, 1);

    G.print();

    return 0;
}

// DEPTH FIRST SEARCH (DFS) & BREADTH FIRST SEARCH (BFS)
#include <iostream>
#include <list>
#include <map>
#include <vector>
using namespace std;
class Graph
{
private:
    map<int, bool> visited;  // Used for DFS
    map<int, list<int>> adj; // Used for DFS, BFS
    

public:
    void add(int u, int v, int directed)
    {
        adj[u].push_back(v);
        if (!directed)
            adj[v].push_back(u);
    }

    void DFS(int source)
    {
        visited[source] = true;
        cout << source << " ";

        for (auto i : adj[source])
            if (!visited[i])
                DFS(i);
    }

    void BFS(int source)
    {
        vector<bool> Visit(adj.size(), false); // Used for BFS

        list<int> queue;
        Visit[source] = true;
        queue.push_back(source);

        while (!queue.empty())
        {
            source = queue.front();
            cout << source << " ";
            queue.pop_front();

            for (auto i : adj[source])
                if (!Visit[i])
                {
                    Visit[i] = true;
                    queue.push_back(i);
                }
        }
    }
};

int main()
{
    Graph g;
    g.add(2, 0, 1);
    g.add(0, 2, 1);
    g.add(0, 1, 1);
    g.add(1, 2, 1);
    g.add(2, 3, 1);
    g.add(3, 3, 1);

    cout << "DFS -> ";
    g.DFS(2);

    cout << "\n\nBFS -> ";
    g.add(0, 1, 0);
    g.add(0, 2, 0);
    g.add(2, 1, 0);
    g.add(2, 3, 0);
    g.add(3, 1, 0);
    g.add(4, 1, 0);

    g.BFS(0);
    return 0;
}
