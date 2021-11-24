// Breath first search - Graph

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> adj[100] {{}, {2, 5}, {1, 3, 5}, {2, 4}, {3, 5, 6}, {1, 2, 4}, {4}};
int visited[100] = {0}; // 0 = not visited, 1 = visited
queue<int> q;
int s=6, n=7; // s = starting node, n = total node

int main()
{
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
                q.push(v);
            }
        }
    }

    cout << endl;

    for(int i=1; i<=6; i++)
    {
        cout << "Node " << i << " is: " << visited[i] << endl;
    }

    return 0;
}
