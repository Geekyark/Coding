#include <bits/stdc++.h>
#define Nitro ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define all(z) z.begin(),z.end()
#define dis(arr) cout<<#arr<<" : [ ";for(auto i : arr) cout<<i<<" "; cout<<"]\n";
#define vvp vector<pair<int,int>>


using namespace std;
#define ll long long
int main() {
	Nitro
	ll test = 1;
	//cin>>test;
	while (test--) {
		int n, k; cin >> n >> k;
		string s; cin >> s;
		int j = 0, i = 0;
		while (j < s.length()) {
			if (j - i + 1 < k)
				j++;
			else if (j - i + 1 == k) {
				bool flag = false;
				for (int d = i; d < (k + i); d++)
				{
					if (s[d] == '1')
					{flag = true; break;}
				}
				if (flag)
				{
					for (int d = i; d < (k + i); d++)
						if (s[d] == '0')
							s[d] = '1';
						else
							s[d] = '0';
				}

				i++;

			}
		}
		bool flag = true;
		for (int i = 1; i < s.length() - 1; i++)
			if (s[i] != s[i - 1] and s[i] != '0')
			{flag = false; break;}

		if (flag)
			cout << 1 << endl;
		else
			cout << 0 << endl;


	}


	return 0;
}