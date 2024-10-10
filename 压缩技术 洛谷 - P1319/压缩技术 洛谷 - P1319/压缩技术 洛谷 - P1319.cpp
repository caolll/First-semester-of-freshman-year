#include<iostream>
using namespace std;
int main()
{
	int num = 0, sum = 0;
	int n, i, j = 0;
	cin >> n;
	while (sum< (n * n)) {
		cin >> i;
		sum ++;
		if (j % 2 == 0) {
			while (i > 0) {
				num++;
				if (num % n == 0) {
					cout << 0;
					cout << endl;
				}
				else cout << 0;
				i--;
			}
			
		}
		else {
			while (i > 0) {
				num++;
				if (num % n == 0) {
					cout << 1;
					cout << endl;
				}
				else cout << 1;
				i--;
			}
		
		}
		j++;
	}
	return 0;
}