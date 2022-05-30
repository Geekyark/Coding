#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int a=1;a<=t;a++){
        int E[1002][2];
        int N;
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>E[i][0]>>E[i][1];
        }
        vector<int>adj[N+1];
        for(int i=0;i<N-1;i++){
            adj[E[i][0]].push_back(E[i][1]);
        }
        vector<int>visited(N+1,0);
        visited[1]=1;
        int level;
        queue<pair<int,int>>q;
        q.push({1,0});
        while(!q.empty()){
            int node=q.front().first;
            level=q.front().second;
            q.pop();
            level++;
            for(auto it:adj[node]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push({it,level});
                }
            }
     
        }
    cout<<"#"<<a<<" "<<level<<endl;
    }
    
}
