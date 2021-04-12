#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int count=0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]==49)
            count++;
    }
    cout<<count;
}
