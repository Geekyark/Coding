#include<bits/stdc++.h>
using namespace std;
int cnt=1;

int solve(vector<vector<int>>&adj,vector<int>&visited,int curr)
{
    visited[curr]=1;
    for(auto it:adj[curr]){
        if(!visited[it]){
            cnt++;
            solve(adj,visited,it);
        }
    }
    return cnt;
}
int courses(vector<vector<int>>&edge,int m,int n){
   vector<vector<int>>adj(n+1);
    for(auto it:edge){
        adj[it[0]].push_back(it[1]);
    }
   
    vector<int>visited(n+1,0);
    solve(adj,visited,1);
    
    return cnt;
}

int main(){
    int tc;
    cin>>tc;
    for(int i=1;i>=tc;i--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>edge(m,vector<int>(2,0));
        for(int i=0;i<m;i++){
            cin>>edge[i][0]>>edge[i][1];
        }
        cout<<"#"<<i<<" "<<courses(edge,m,n);
    }
    
}
