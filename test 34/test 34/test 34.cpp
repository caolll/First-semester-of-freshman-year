#include<iostream>
using namespace std;
int main()
{
	int a[105], n,k;
	cin >> n;
	//����ÿ��С��Ŀɰ�ֵ
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	//�ж�ÿ��С��Ŀɰ�ֵ��С
	for (int i = 1; i <= n; i++) {
		k = 0;
		for (int j = 1; j <= i - 1; j++) {
			if (a[j] < a[i])k++;
		}
		cout << k << " ";
	}
	
	return 0;
}