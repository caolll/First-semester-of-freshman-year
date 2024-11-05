#include<bits/stdc++.h>
using namespace std;
struct xing {
	int xue;
	int xc;
	int sc;
} a[1000];
int main()
{
	int n;
	int c = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].xue;
		cin >> a[i].xc;
		cin >> a[i].sc;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i].xc * 7 + 3 * a[i].sc >= 800 && a[i].sc + a[i].xc > 140)cout << "Excellent" << endl;
		else cout << "Not excellent" << endl;
	}
	return 0;
}
