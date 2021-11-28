// Dijkstra algorithm to find single source shortest path from source node to destination node
// [Graph Image => page-633, Niton C programming book]

#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int At, cost;
    Node(int _at, int _cost)
    {
        At = _at;
        cost = _cost;
    }
};

bool operator<(Node A, Node B)
{
    return A.cost > B.cost;
}

struct Edge
{
    int v, w;
};

vector<Edge> adj[]= {{}, {{2,10}, {3,5}}, {{3,2}, {4,1}}, {{2,3}, {4,9}, {5,2}}, {{5,4}}, {{4,6}, {1,7}}}; // adjacency list of weighted edges
priority_queue<Node> PQ;
int dist[100], n=5;

void dijkstra(int source)
{

    for(int i=1; i<=n; i++)
        dist[i] = 1000000000;

    dist[source] = 0;
    PQ.push(Node(source, 0));

    while(!(PQ.empty()))
    {
        Node u = PQ.top();
        PQ.pop();

        if(u.cost != dist[u.At])
            continue;

        for(Edge e: adj[u.At])
        {
            if(dist[e.v] > (u.cost + e.w))
            {
                dist[e.v] = u.cost + e.w;
                PQ.push(Node(e.v, dist[e.v]));
            }
        }
    }

    cout << "Shortest path from " << source << " to all [1,2,3,4,5] nodes are: ";
    for(int i=1; i<=n; i++)
        cout << dist[i] << " ";
}

int main()
{
    dijkstra(1);
    cout << endl;

    return 0;
}
