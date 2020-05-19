#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
	  int long long n,k,ans;
	  cin>>n>>k;
      if(n%2==0)
      {
       ans=n*(k+1)+(n%k);
	  }
	  else
	  ans=n*(k+1)-((n%k)+1);
	  cout<<ans<<endl;
  }
}
