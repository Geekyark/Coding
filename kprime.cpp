#include <bits/stdc++.h>
using namespace std;
void printKPFNums(int a, int b, int k)
{
	int count=0;
	bool prime[b+1] = { true };
	int p_factors[b+1] = { 0 };
	for (int p = 2; p <= b; p++)
		if (p_factors[p] == 0)
			for (int i = p; i <= b; i += p)
				p_factors[i]++;
	for (int i = a; i <= b; i++){
		if (p_factors[i] == k)
			count++;
}
cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
	int a,b,k;
	cin>>a>>b>>k;
	printKPFNums(a, b, k);

}
return 0;
}
