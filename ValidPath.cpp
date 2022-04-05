#include<bits/stdc++.h>
using namespace std;
bool validpath( int source,vector<int>&visited,vector<vector<int>>&adj){
    visited[source]=1;
    for(auto it:adj[source]){
        if(validpath(it,visited,adj)){
        return true;;
    }
    }
    return false;
}
bool checkpath(int source,int destination,vector<vector<int>>&adj){
    int n=adj.size();
    vector<int>visited(n+1,0);
    validpath(source,visited,adj);
    if(visited[destination]==1){
        return true;
    }
    return false;
}

int main(){
    int tc;
    cin>>tc;
    for(int test=1;test<=tc;test++){
        
        int n,m;
        cin>>n>>m;
        vector<vector<int>>e(m,vector<int>(2,0));
        for(int i=0;i<m;i++){
            cin>>e[i][0]>>e[i][1];
        }
        vector<vector<int>>adj(n+1);
        for(int i=0;i<n;i++){
            adj[e[i][0]].push_back(e[i][1]);
            adj[e[i][1]].push_back(e[i][0]);
        }
        int source,destination;
        cin>>source>>destination;
        cout<<"#"<<test<<" "<<checkpath(source,destination,adj);
    }
}
