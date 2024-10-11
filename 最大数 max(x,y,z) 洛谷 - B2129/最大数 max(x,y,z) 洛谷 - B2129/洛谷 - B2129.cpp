#include<bits/stdc++.h>
using namespace std;
double Max(double x, double y, double z) {
	return max(x, max(y, z));
}
int main() {

	double a, b, c;
	cin >> a >> b >> c;
	double m = Max(a, b, c) / (Max(a+b, b, c) *Max(a, b, c+b));
	printf("%.3lf", m);
	return 0;
}