#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int s[42][42] = {0};
	int x, y;
	x = 1; y = n / 2 + 1;;
	s[x][y] = 1;
	for (int i = 2; i <= n*n; i++) {
		if (x == 1 && y != n) {
			x = n; y = y + 1;
		}
		else if (x != 1 && y == n) {
			y = 1;
			x = x - 1;
		}
		else if (x == 1 && y == n) {
			x = x + 1;
		}
		else if (x != 1 && y != n) {
			if (s[x - 1][y + 1] == 0) {
				x = x - 1;
				y = y + 1;
			}
			else {
				x = x + 1;
			}
		}
		s[x][y] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}