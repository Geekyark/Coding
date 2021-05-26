#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
#define lln long long int
#define ld long double
#define all(x) (x).begin(),(x).end()
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MOD = 1e9 + 7;
const int N = (int)2e5 + 5;


int main(){
    IOS;
    
    int TT = 1;
    cin >> TT;
    for(int tt = 1; tt <= TT; tt++){
        int n, a, b, c, d, p, q, y;
        cin >> n >> a >> b >> c >> d >> p >> q >> y;
        vector<int> A(n);   for(auto& i : A) cin >> i;
        a = A[a - 1]; b = A[b - 1]; c = A[c - 1]; d = A[d - 1];
        int trn = abs(a - c) * p;
        if(y >= trn) trn += y - trn;
        else{
            cout << p * abs(a - b) << endl;
            continue;
        }
        trn = trn + abs(c - d)*q + abs(d - b) * p;
        cout << min(trn, p * abs(a - b)) << endl;        
    }
    return 0;    
}
