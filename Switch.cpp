#include<bits/stdc++.h>
using namespace std;
int E[1000][2];

void bfs(vector<int>adj[],int n,int &num_off,int &num_on,int index,int k[])
{
    queue<int>q;
    q.push(index);
    vector<int>vis(n+1,0);
    vis[index] = 1;

    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        if(k[front] == 0)
        {
            num_on++;
        }
        else
        {
            num_off++;
        }

        for(auto j : adj[front])
        {
            int v = j;
            if(vis[v] == 0)
            {
                vis[v] = 1;
                q.push(v);
            }
        }

    }
}
int main()
{
     int t;
     cin >> t;
      for(int test_case = 0; test_case < t; test_case)
      {
          int n,m,s;
          cin >> n >> m >> s;
          int k[100000];
          for(int i = 1 ; i <= n; i ++)
          {
              cin >> k[i];
          }

          vector<int>adj[n+1];
          for(int i = 0; i < m; i ++)
          {
              cin >> E[i][0] >> E[i][1];
              adj[E[i][0]].push_back(E[i][1]);
              adj[E[i][1]].push_back(E[i][0]);
          }     

          int num_off = 0;
          int num_on = 0;

          bfs(adj,n,num_off,num_on,s,k);
          cout << "#" << test_case<< " " << num_on << " " << num_off<<endl;
     }
     return 0;
}
