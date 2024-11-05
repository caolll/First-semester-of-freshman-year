#include<iostream>
using namespace std;
int main() {
	int t,s=0;
	cin >> t;
	while (t--) {
		int n,a[15];
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		s = 10 - n;
	}
	return 0;
}