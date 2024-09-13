#include<iostream>
using namespace std;
int main()
{
	int a[100],k=0;
	for (int i = 0; ; i++) {
		cin >> a[i];
		if (a[i] == 0)break;
		 k = i;
	}
	for (int j = k; j>=0; j--)cout << a[j] << " ";
	return 0;
}