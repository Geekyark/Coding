#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
 int s;
void findSort(int node,vector<int>&visited,stack<int>&st,vector<pair<int,int>>adj[]){
    visited[node]=1;
    cout<<"node="<<node<<endl;
    for(auto it:adj[node]){
        if(!visited[it.first]){
            findSort(it.first,visited,st,adj);
        }
    }
    st.push(node);
   
}


void Sortedpath(int src,int N,vector<pair<int,int>>adj[]){
    vector<int>visited(s,0);
    
    stack<int>st;
    
    for(int i=0;i<s;i++)
    if(!visited[i])
        findSort(i,visited,st,adj);
    
    vector<int>dist(s);
   for(int i=0;i<s;i++)
       dist[i]=1e9;
    dist[src]=0;
    while(!st.empty()){
        cout<<"st="<<st.top()<<endl;
        int node=st.top();
        st.pop();
        if(dist[node]!=INF)
        {
            for(auto it:adj[node]){
                if(dist[node]+it.second<=dist[it.first])
                dist[it.first]=dist[node]+it.second;
            }
        }
    }
    
    for (int i = 0; i <s; i++)
        (dist[i] == INF)? cout << "INF ": cout << dist[i] << " ";
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
       
        cin>>s;
        
        vector<pair<int,int>>adj[s+1];
        for(int i=0;i<n;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        }
        Sortedpath(0,n,adj);
       
    }
}
