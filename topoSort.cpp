#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

void topo(int curr,vector<int>&visited,stack<int>&st,vector<vector<int>>&adj){
    visited[curr]=1;
    for(auto it:adj[curr]){
        topo(it,visited,adj);
    }
    return st.push(curr);
}


vector<int>topoSort(int n,vector<vector<int>>&adj){
    stack<int>st;
    vector<int>visited(n,0);
    for(int i=0;i<n;i++){
        if(!visited[i])
        topo(i,visited,st,adj);
    }
    vector<int>topo;
    for(int i=0;i<st.size();i++){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
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
