#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[10][10] = { 0 }, b = 1,x=1,y=1;
	//�Ƚ���һλ��ȷ��
	a[x][y] = b;
	while ( b< n * n) {
		//һֱ������
		while (a[x][y + 1] == 0 && y+1<=n) {
			y++; b++;
			a[x][y] = b;
		}
		//һֱ������
		while (a[x + 1][y] == 0 && x+1<=n) {
			x++; b++;
			a[x][y] = b;
		}
		//һֱ������
		while (a[x][y - 1] == 0 && y-1>=1) {
			y--; b++;
			a[x][y] = b;
		}
		//һֱ������
		while (a[x - 1][y] == 0 && x-1>=1) {
			x--; b++;
			a[x][y] = b;
		}
	}
	//�������
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
	
	return 0;
}