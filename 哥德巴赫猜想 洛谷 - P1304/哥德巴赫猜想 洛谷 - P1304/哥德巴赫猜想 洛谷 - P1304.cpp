#include<bits/stdc++.h>
using namespace std;
bool prime(int n) {
	if (n <= 1)return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n %i == 0)return false;
	}
	return true;
}
void gd(int n)
{
	for (int i = 2; i <= n; i++) {
		if (prime(i) && prime(n - i)) {
			printf("%d=%d+%d\n", n, i, n - i);
			return;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 4; i <= n; i += 2) {
		gd(i);
	}

	return 0;
}