#include<bits/stdc++.h>
using namespace std;
int erfen(int a[], int len, int num);
int main() {
	int a[] = { 1,12,33,44,55,56,66,78,87,99 };
	int len = sizeof(a) / sizeof(a[0]);
	int num;
	cin >> num;
	int b = erfen(a, len, num);
	cout << b;
	return 0;
}
int erfen(int a[], int len, int num) {
	int min = 0;
	int max = len - 1;
	while (min<=max) {
		int mid = (min + max) / 2;
		if (a[mid] > num) {
			max = mid - 1;
		}
		else if (a[mid] < num) {
			min = mid + 1;
		}
		else return mid;
	}
	return -1;
}