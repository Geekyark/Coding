#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
vector<vector<int>>res;
int countPaths(int n,vector<vector<pair<int,int>>>&edge){
   vector<long long> distance(n, LONG_MAX); 
   vector<long long> PossiblePaths(n); 
        int source =  0; 
        distance[source] = 0;
        PossiblePaths[0] = 1;  
        priority_queue<pair<long long , long long>,vector<pair<long long,long long>>,greater<>>pq; 
        pq.push({distance[source],source});
        while(!pq.empty()){
            auto[u_cost , u ] = pq.top(); 
            pq.pop(); 

        for (auto &adjacent_vertice: edge[u]) {
            auto[v ,v_cost]=adjacent_vertice;
            
        if (distance[u] + v_cost < distance[v]) 
               {
                   distance[v] = distance[u] + v_cost ; 
                   pq.push ( { distance[v] , v } ) ;  
                   
                   PossiblePaths[v] = PossiblePaths[u] ;
               }
               else if ( distance[v] == u_cost + v_cost ) 
               {
                   PossiblePaths[v] += PossiblePaths[u] ;
                   PossiblePaths[v] = PossiblePaths[v] % mod ; 
               }   
        }
    }
    
    return PossiblePaths[n]; 
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
            cout<<countPaths(n,edge);
    }
}
