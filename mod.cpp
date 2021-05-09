#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
    ll t;
    cin>>t;
    while(t--){
        ll count=0;
        ll n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++){
            for(ll j=i+1;j<=n;j++){
                if((m%i)%j==(m%j)%i)
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
