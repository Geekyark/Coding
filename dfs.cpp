#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<int>bfs(int n,vector<vector<int>>&adj){
    vector<int>visited(n+1,0);
    vector<int>bfs;
    for(int i=0;i<n;i++){
        if(!visited[i]){
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node]){
                if(!visited[it]){
               q.push(it);
               visited[it]=1;
            }
          }
        }
      }
    }
    return bfs;
} 

};


int main(){
    int tc;
    for(int test=1;test<=tc;test++){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>edge(n,vector<int>(2,0));
        for(int i=0;i<m;i++){
            cin>>edge[i][0]>>edge[i][1];
        }
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            adj[edge[i][0]].push_back(edge[i][1]);
            adj[edge[i][1]].push_back(edge[i][0]);
        }
        Solution obj;
        vector<int>ans=obj.bfs(n, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
