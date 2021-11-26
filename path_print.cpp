// Graph path printing using breadth first search

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> adj[100] {{}, {2, 5}, {1, 3, 5}, {2, 4}, {3, 5, 6}, {1, 2, 4}, {4}};
    int visited[100] = {0}; // 0 = not visited, 1 = visited
    queue<int> q;

    int s=4, n=7, t=1; // s = starting node, n = total node, t = destination node
    int dist[100]; // distance from starting vertex
    int p[100]; // we came to i from p[i]

    for(int i=1; i<=6; i++)
    {
        cout << "Adjacent nodes of " << i << " is: ";

        for(int j=0; j<adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }

    q.push(s);
    visited[s] = 1;
    dist[s] = 0;
    p[s] = s;

    while(!(q.empty()))
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]] == 0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                dist[v] = dist[u]+1;
                p[v] = u;
                q.push(v);
            }
        }
    }

    if(visited[t] == 0)
    {
        cout << "There is no path\n";
        return 0;
    }

    vector<int> path; // it will store the nodes in reverse order
    path.push_back(t);
    int now = t;

    while(now != s)
    {
        now = p[now];
        path.push_back(now);
    }

    reverse(path.begin(), path.end());

    cout << "\nPath from " << s << " to " << t << " are: ";
    for(auto i: path)
        cout << i << " ";

    cout << endl;

    return 0;
}
