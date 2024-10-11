#include<bits/stdc++.h>
using namespace std;
double x; int n;
double f(double x, int n) {
	if (n == 1)return sqrt(1 + x);
	else return sqrt(n + f(x, n - 1));
}
int main()
{
	cin >> x >> n;
	printf("%.2lf", f(x, n));
	return 0;
}