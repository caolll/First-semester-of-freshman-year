#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[] = { 3,1,65,343,4,6,8897,5 };
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		cout << a[i] << " ";
	}
	return 0;
}