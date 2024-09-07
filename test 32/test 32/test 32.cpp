//求极差 / 最大跨度值
#include<iostream>
using namespace std;
int main()
{
	int a, n, max, min;
	cin >> n;
	cin >> a;
	min = a;
	max = a;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (max < a)max = a;
		if (min > a)min = a;
	}
	cout << max - min;
	return 0;
}