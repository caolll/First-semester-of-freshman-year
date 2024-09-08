#include<iostream>
using namespace std;
int main()
{
	int k,j=0,day=0,a=1;
	cin >> k;
	for (day = 0; day + a <= k; day += a, a++) {
		j += a * a;
	}
	j=(k - day)* a + j ;
	cout << j;
	return 0;
}