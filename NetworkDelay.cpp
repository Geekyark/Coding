#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>edge[n+1];
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<n;i++){
            edge[a].push_back({b,c});
            edge[b].push_back({a,c});
        }
        int z,k;
        cin>>z>>k;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        pq.push({0,k});
         
        while(!pq.empty()){
            int dis=pq.top().first;
            int prev=pq.top().second;
            pq.pop();
            vector<pair<int,int>>:: iterator it;
            for(auto it : edge[prev]){
                int next=it.first;
                int prevtime=it.second;
            if(dist[next]>dis+prevtime){
                dist[next]=dis+prevtime;
                pq.push({dist[next],next});
            } 
           
            }
        }
           int time=0;
            for(int i=0;i<dist.size();i++){
                time=max(time,dist[i]);
            }
            if(time==INT_MAX){
                return -1;
            }
        cout<<"#"<<" "<<time<<endl;
    }
    return 0;
}
