#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[105] = { 0 };
	int i = 1;
	while (n != 1) {
		a[i] = n;
		if (n % 2 == 0) {
			n = n / 2;
		}
		else n = n * 3 + 1;
		i++;
	}
	cout << 1 << " ";
	for (int j = i-1; j >= 1; j--) {
		cout << a[j] << " ";
	}
	return 0;
}