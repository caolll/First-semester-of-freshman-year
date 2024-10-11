#include<iostream>
using namespace std;
int main()
{
	int n, k, x, c = 0;
	cin >> n >> k >> x;
	int a[100];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - k; i++) {
		c += a[i];
	}
	cout << c + k * x;
	return 0;
}