vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int>>ans;
    unordered_map<string,vector<int>>grps;
    for(int i=0;i<A.size();i++){
        string cpy=A[i];
        sort(cpy.begin(),cpy.end());
        grps[cpy].push_back(i+1);
    }
    unordered_map<string,vector<int>>:: iterator it;
    for(it=grps.begin();it!=grps.end();it++){
        ans.push_back(it->second);
    }
    return ans;
}
