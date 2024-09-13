#include<iostream>
using namespace std;
int main()
{
	int n,a[100],b=0,c[100];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	    c[i] = 1000;
	}
		for (int k = 1; k <= n; k++) {
			for (int i = 1; i <= n; i++) {
				for (int j = i + 1; j <= n; j++) {
					if (a[k] == a[i] + a[j]&&c[k]!=1) {
						b++;
						c[k] = 1;
						break;
					}
				}
			}
		}
	cout << b;
	return 0;
}