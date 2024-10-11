#include<iostream>
using namespace std;
bool fun(int n);
int main()
{
	int n;
	cin >> n;
	int a[105];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (fun(a[i])) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
bool fun(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
