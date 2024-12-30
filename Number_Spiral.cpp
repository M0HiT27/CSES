#include<bits/stdc++.h>
using namespace std;
//auto format ctr+alt+f
int main() {

	int t;
	cin >> t;
	while (t--) {
		unsigned long long row, col;
		cin >> row >> col;
		unsigned long long ans = 1;
		if (col >= row) {

			if (col % 2 == 1) {
				ans = col * col;
				ans -= row - 1;
			} else {
				col--;
				ans = col * col;
				ans += row;
			}
		} else {
			if (row % 2 == 0) {
				ans = row * row;
				ans -= col - 1;
			} else {
				row--;
				ans = row * row;
				ans += col;
			}
		}
		cout << ans << "\n";
	}

}
