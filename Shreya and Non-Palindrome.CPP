#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string rev_str=str;
    reverse(rev_str.begin(),rev_str.end());
    int a=0;
    for (int i{1};i<str.length();i++)
         if (str[i]==str[i-1])
           a+=1;
           if (a==str.length()-1)
               cout<<0;
           else if (str==rev_str)
            cout<<str.length()-1;
           else
         cout<<str.length();
}
