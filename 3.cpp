#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 int k1 = t;

 while(t--){
    int N, M;
    cin>>N>>M;

    pair<int, int> A[N];

    for(int i=0; i<N; i++){
        cin >> A[i].first >> A[i].second;
    }

    int B[M], ans[M];
    for(int i=0; i<M; i++){
        cin >> B[i];
    }
    for(int i=0; i<M; i++){
        int diff = INT_MAX;
        int fl = 0;
        for(int j=0; j<N; j++){
            if(B[i] >= A[j].first && B[i] <= A[j].second){
                ans[i] = B[i];
                break;
            }
            else if(B[i] > A[j].second){
                diff = min(diff, abs(A[j].second-B[i]));
                fl = -1;
            }
            else if(B[i] < A[j].first){
                diff = min(diff, abs(A[j].first-B[i]));
                fl = 1;
            }
        }
        //cout<<fl<<" "<<diff;
        if(fl != 0){
            ans[i] = B[i] + fl*diff;
        }
    }


    cout<<"Case #"<<k1-t<<": ";

    for(int i=0; i<M; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 }

}
