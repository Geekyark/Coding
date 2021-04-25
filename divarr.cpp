
// DIVIDE ARRAYS
// TIME COMPLEXITY:- O(NLOG(N))
// SPACE COMPLEXITY:- O(N)

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

signed main()
{
	FIO;

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		
		vector<ll> v(n,0);

		// map as a frequency table for the elements of the array
		// mp1 for operations in prefix manner
		// mp2 for operations in suffix manner
		map<ll,ll> mp1,mp2;

		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
			
			// increment frequency in the map
			mp1[v[i]]++;
			mp2[v[i]]++;
		}

		// calculate mex of the entire array

		ll mex = 0;
		while(mp1.find(mex)!=mp1.end())mex++;

		ll pre = mex;
		ll suff = mex;

		// precalculate the mex for prefix part and suffix part of the array
		vi suff_mex(n,0);
		vi pref_mex(n,0);

		// fill pref_mex vector
		for(ll i=n-1;i>=0;i--)
		{
			pref_mex[i]=pre;

			// change in mex after excluding current element

			mp1[v[i]]--;
			if(mp1[v[i]]==0)mp1.erase(v[i]);

			// if this condition holds, mex changes
			if(v[i]<pre and mp1.find(v[i])==mp1.end())pre=v[i];
		}

		// fill suff_mex vector
		for(ll i=0;i<n;i++)
		{
			suff_mex[i] = suff;

			// change in mex after excluding current element

			mp2[v[i]]--;
			if(mp2[v[i]]==0)mp2.erase(v[i]);

			// if this condition holds, mex changes
			if(v[i]<suff and mp2.find(v[i])==mp2.end())suff=v[i];

		}

		for(ll i=0;i<n-1;i++)
		{
			// we have found the required minimum index as answer
			if(pref_mex[i]==suff_mex[i+1])
			{
				cout<<i+1<<endl;
				goto h;
			}
		}

		// no any suitable index found, print -1
		cout<<"-1\n";
		h:;
	}
	
}
