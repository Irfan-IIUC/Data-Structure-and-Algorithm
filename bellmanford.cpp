// Dijkstra algorithm to find single source shortest path from source node to destination node
// [Graph Image => page-633, Niton C programming book]

#include<iostream>
#include<queue>
using namespace std;

struct Edge{
    int u, v, w;
};

vector<Edge> E{{1,2,10}, {1,3,5}, {2,3,2}, {2,4,1}, {3,2,3}, {3,4,9}, {3,5,2}, {4,5,4}, {5,1,7}, {5,4,6}}; // weighted edge list
int dist[100], n=5, s=1;

int main()
{
    for(int i=1; i<=n; i++)
        dist[i] = 1000000000;

    dist[s] = 0;

    for(int i=1; i<=n; i++)
    {
        for(Edge e : E)
        {
            if(dist[e.v] > (dist[e.u] + e.w))
            {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    cout << "Shortest path from " << s << " to all [1,2,3,4,5] nodes are: ";
    for(int i=1; i<=n; i++)
        cout << dist[i] << " ";

    cout << endl;

    return 0;
}
