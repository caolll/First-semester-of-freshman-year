#include<iostream>
using namespace std;
int main()
{
	int n, g = 1, c = 0, a[1000005];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (g == i) {
			g = g + a[i];
			c++;
		}
	}
	if (g == n)cout << "Yes" << endl;
	else cout << "No" << endl;
	cout << c;
	return 0;
}