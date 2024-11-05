#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[5] = { 1 ,2 ,3,4,5 };
	int len = sizeof(a) / sizeof(a[0]);
	srand(time(NULL));
	int s = rand() % 5;
	for (int i = 0; i < len; i++) {
		int t = a[i];
		a[i] = a[s];
		a[s] = t;
	}
	for (int i = 0; i < len; i++) {
		cout << a[i] << " ";
	}
	return 0;
}