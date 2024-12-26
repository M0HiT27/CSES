#include<bits/stdc++.h>
using namespace std;
//auto format ctr+alt+f
int main() {

	string s;
	cin >> s;
	int ans=1;
	int n=s.length();
	int left=0;
	for(int i=1 ; i<n ; i++)
	{
		if(s[i]!=s[left]){
			left=i;
		}
		ans=max(ans,i-left+1);
	}
	cout << ans;
}
