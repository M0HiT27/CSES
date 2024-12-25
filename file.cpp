#include<bits/stdc++.h>
using namespace std;
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