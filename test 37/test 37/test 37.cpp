#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int t[n];
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	int min, max;
	for (int i; i <= n - m; i++) {
		int a = 0;
		for (int j = i; j < i; j++) {
			a += s[j];
		}
		if (a < min)min = a;
	}
	cout << min;
	return 0;
}