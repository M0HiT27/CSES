#include<bits/stdc++.h>
using namespace std;
//https://cses.fi/problemset/task/1068
//auto format ctr+alt+f
int main() {

	long long n;
	cin >> n;
	cout<<n<<" ";
	while(n!=1)
	{
		if(n%2==0){
			n/=2;
		}else{
			n*=3;
			n++;
		}
		cout<<n<<" ";
	}
}
