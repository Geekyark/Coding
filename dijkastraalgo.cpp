#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    while(tc--){
        int n,m,source;
        cin>>n>>m;
        int u,v,wt;
        cin>>u>>v>>wt;
        vector<pair<int,int>>g[n+1];
        for(int i=0;i<u;i++){
            g[u].push_back({v,wt});
            g[v].push_back({u,wt});
            
        }
        cin>>source;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>disto(0,INT_MAX);
        disto[source]=0;
        pq.push({0,source});
        while(!pq.empty()){
            int dist=pq.top().first;
            int prev=pq.top().second;
            pq.pop();
            vector<pair<int,int>>::iterator it;
            for(it=g[prev].begin();it!=g[prev].end();it++){
            int next=it->first;
            int nextdist=it->second;
            if(disto[next]>disto[prev]+nextdist){
            disto[next]=disto[prev]+nextdist;
            pq.push({disto[next],next});
            
        }
        
        } 
      }
      cout << "The distances from source, " << source << ", are : \n";
	for(int i = 1 ; i<=n ; i++)	
	cout << disto[i] << " ";
	cout << "\n";
        
    }
    
	
	return 0;
}
