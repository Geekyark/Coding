#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void findPath(vector<vector<int>>&edge,vector<int>& temp, int curr)
    {
        temp.push_back(curr);
        if(curr ==edge.size() - 1)
            res.push_back(temp);
        for(auto it : edge[curr])
            findPath(edge, temp, it);
        temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& edge) {
        
        vector<int>temp;
        findPath(edge, temp, 0);
        for(int i=0;i<edge.size();i++){
            cout<<res[i][0]<<" ";
        }
    }
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>edge(n);
        int u,v;
        for(int i=0;i<m;i++){
               
               cin>>u>>v;
               edge[u].push_back(v);
            }
        allPathsSourceTarget(edge);
    }
}
