#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int ans=0;
   int x1,y1,x2,y2,x3,y3;
   cin>>x1>>y1;
   cin>>x2>>y2;
   cin>>x3>>y3;
   if(x1==x2)
   {
      if(x1==x3&&((y1<y3&&y2>y3)||(y1>y3&&y2<y3)))
      {
          //cout<<"y1"<<y1<<"y2"<<y2<<"y3"<<y3<<endl;
        ans=2+abs(y1-y2);
      }
      else
      ans=abs(y1-y2);
   }
   else if(y1==y2)
   {
    if(y1==y3&&x1<x3&&x2>x3||x1>x2&&x2<x3)
     {
     ans=2+abs(x1-x2);
     }
     else
     ans=abs(x1-x2);
   }
   else
   ans=abs(x1-x2)+abs(y1-y2);

  cout<<ans<<endl;
  }
}