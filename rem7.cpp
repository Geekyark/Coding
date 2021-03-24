#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int rem7(string n)
    {
       int rem=0;
       for(int i=0;i<n.length();i++){
        rem=rem%10+(n[i]-'0');
        rem=rem%7;
       }
       return rem;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        Solution ob;
        cout<<ob.rem7(n)<<endl;
    }
    return 0;
}
