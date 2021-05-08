#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
  ll a[n];
  ll b[n];
  ll c[n];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }

   for(int i=0;i<n;i++)
  {
   cin>>b[i];

  }
   for(int i=0;i<n;i++)
  {
   cin>>c[i];

  }

int i=0,j=1;
ll mx=-1000000;
ll mn=10000000;
while(i<j&&i<n&&j<n)
{
ll p= abs(a[i]-a[j]);
ll q=abs((b[i]*b[i])-(b[j]*b[j]));
ll r=((c[i]*c[i])-(c[j]*c[j]));
ll total=p+q+r; 
if(mx<total)
mx=total;
if(mn>total)
 mn=total;

 if(j<n)
   j++;
if(j==n){
i++;
j=i+1;
}


}

cout<<mx<<" "<<mn<<endl;



 }






}
