#include<bits/stdc++.h>
using namespace std;
//auto format ctr+alt+f
int main() {

	int n;
	cin >> n;
	int curr=0;
	long long ans=0;
	while(n--)
	{
		int num=0;
		cin >> num;
		if(num<curr){
			ans+=(curr-num);
		}
		curr=max(curr,num);
	}
	cout<< ans;
}
