#include<bits/stdc++.h>
using namespace std;
void dhx(int a[], int len, int* max, int* min);
int main() {
	int a[10] = { 0 };
	int len = 10;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int max = a[0];
	int min = a[0];
	dhx(a, len, &max, &min);
	cout << max << " " << min;
	return 0;
}
void dhx(int a[], int len, int* max, int* min) {
	*max = a[0];
	for (int i = 0; i < len; i++)
	{
		if (*max < a[i])*max = a[i];
	}

	for (int j = 0; j < len; j++) {
		if (*min > a[j])*min = a[j];
	}
}