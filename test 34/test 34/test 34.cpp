#include<iostream>
using namespace std;
int main()
{
	int a[105], n,k;
	cin >> n;
	//输入每条小鱼的可爱值
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	//判定每条小鱼的可爱值大小
	for (int i = 1; i <= n; i++) {
		k = 0;
		for (int j = 1; j <= i - 1; j++) {
			if (a[j] < a[i])k++;
		}
		cout << k << " ";
	}
	
	return 0;
}