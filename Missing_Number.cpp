#include<bits/stdc++.h>
using namespace std;
//auto format ctr+alt+f
int main() {

	long long n;
	cin >> n;
	long long sum=(n*(n+1))/2;
	n--;
	while(n--){
		int x;
		cin >> x;
		sum-=x;
	}
	cout << sum;
}
