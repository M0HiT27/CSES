#include<bits/stdc++.h>
using namespace std;
//auto format ctr+alt+f
int main() {

	int n;
	cin >> n;
	if (n == 2 or n == 3 ) {
		cout << "NO SOLUTION";
	} else if (n == 4) {
		cout << "2 4 1 3";
	}
	else {
		int start1 = 1;
		int start2 = (n / 2) + (n % 2) + 1;
		while (start1 <= n and start2 <= n) {
			cout << start1++ << " " << start2++ << " ";
		}
		if (n % 2 == 1)cout << start1;
	}
}
