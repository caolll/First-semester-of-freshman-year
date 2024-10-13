#include<bits/stdc++.h>
using namespace std;
double x;
double f( int n) {
	if (n == 1) {
		return x / (x + 1);
	}
	else {
		return x / (f(n - 1) + n);
	}
}

int main()
{
	double b;
	cin >> x >> b;
	double a = f(b);
	printf("%.2lf", a);
	return 0;
}