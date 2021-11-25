// component - Graph

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> adj[100] {{}, {2, 5}, {1, 3, 5}, {2, 4}, {3, 5, 6}, {1, 2, 4}, {4}};
int visited[100] = {0}; // 0 = not visited, 1 = visited
int edge_id[100] = {0};
stack<int> s;
int start=6, n=7, cnt=0; // s = starting node, n = total node

void dfs(int start, int n)
{
    s.push(start);

    while(!(s.empty()))
    {
        int u = s.top();
        s.pop();

        while(edge_id[u] < adj[u].size())
        {
            int v = adj[u][edge_id[u]];
            edge_id[u]++;

            if(visited[v] == 0)
            {
                visited[v] = 1;
                s.push(u);
                s.push(v);
            }
        }
    }
}

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

    cout << endl;

    for(int i=1; i<=7; i++)
    {
        if(visited[i] == 1)
            continue;
        else
        {
            cnt++;
            dfs(start, n);
        }
    }

    cout << "Total component: " << cnt << endl;

    return 0;
}

