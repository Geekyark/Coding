#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
    ll t;
    cin>>t;
    while(t--){
        ll count=0;
        ll n,m,i,j;
        cin>>n>>m;
        while(i<=n && j<=n){
           if((m%i)%j==(m%j)%i)
           count++;
           i++;
           j=i+1;
        }

        cout<<count<<endl;
    }
    return 0;
}
