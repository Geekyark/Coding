#include<bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n,vector<vector<pair<int,int>>>&flights,int src,int dst,int k){
        vector<int>dist(n+1,INT_MAX);
        dist[src]=0;
        queue<pair<int,int>>pq;
        pq.push({0,0});
      
        while(!pq.empty()){
           
               int p=pq.front().first;
               int d=pq.front().second;
                pq.pop();
                for(auto i:flights[p]){
                    if(k>=0)
                    {
                
                    if(dist[i.first]>dist[p]+i.second){
                       dist[i.first]=dist[p]+i.second;
                        pq.push({i.first,dist[i.first]});
                        k--;
                    } 
                }                
            }
        }
        return dist[dst]==INT_MAX? -1:dist[dst];
}

int  main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        vector<vector<pair<int,int>>>edge(n+1);
            int u,v,wt;
           
            for(int i=0;i<m;i++){
                cin>>u>>v>>wt;
                edge[u].push_back({v,wt});
            }
            int src,dst,k;
            cin>>src>>dst>>k;
            
            cout<<findCheapestPrice(n,edge,src,dst,k+1);
    }
}
