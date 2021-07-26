#include <bits/stdc++.h>
using namespace std;

string getPalindrome(string str) {

// Store counts of characters
unordered_map<char, int> hmap;
for (int i = 0; i < str.length(); i++)
	hmap[str[i]]++;

/* find the number of odd elements.
	Takes O(n) */
int oddCount = 0;
char oddChar;
for (auto x : hmap) {
	if (x.second % 2 != 0) {
	oddCount++;
	oddChar = x.first;
	}
}

/* odd_cnt = 1 only if the length of
	str is odd */
if (oddCount > 1 || oddCount == 1 &&
				str.length() % 2 == 0)
	return "NO PALINDROME";

/* Generate first halh of palindrome */
string firstHalf = "", secondHalf = "";
for (auto x : hmap) {

	// Build a string of floor(count/2)
	// occurrences of current character
	string s(x.second / 2, x.first);

	// Attach the built string to end of
	// and begin of second half
	firstHalf = firstHalf + s;
	secondHalf = s + secondHalf;
}

// Insert odd character if there
// is any
return (oddCount == 1) ?
		(firstHalf + oddChar + secondHalf) :
		(firstHalf + secondHalf);
}

int main() {
string s,s1;

cin>>s>>s1;
int len=s1.length();
string s2;
int l=s.length();
for(int i=0;i<len;i++)
{
    size_t found = s.find(s1[i]);
      if (found !=-1){
      s[found]='0';
      //cout<<found<<endl;
      }
}
//cout<<s<<endl;
int j=0;

for(int i=0;i<l;i++)
{
    char ch=s[i];
    if(ch!='0'){
    s2.push_back(ch);

    }

}
//cout<<s2<<endl;

cout << getPalindrome(s2);
return 0;
}
