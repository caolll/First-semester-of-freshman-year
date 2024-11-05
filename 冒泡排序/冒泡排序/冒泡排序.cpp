#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[] = { 2,4,7,34,1,3,67,9 };
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1-i; j++) {
			if (a[j] >= a[j + 1]) {
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		cout << a[i] << " ";
	}
	return 0;
}