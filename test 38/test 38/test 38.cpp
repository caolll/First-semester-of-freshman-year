#include<iostream>
using namespace std;
int main()
{
	int m, n;
	int a[10] = { 0 };
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		int n = i;
		while (n != 0) {
			int t = n % 10;
			n=n / 10;
			a[t]++;
		}
	}for (int i = 0; i <= 9; i++) {
		cout << a[i] << " ";
	}
	return 0;
}