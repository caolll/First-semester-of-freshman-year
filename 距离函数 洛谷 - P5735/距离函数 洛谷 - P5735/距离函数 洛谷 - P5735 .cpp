#include<bits/stdc++.h>
using namespace std;
double chang(double x1, double y1, double x2, double y2) {
    double chang= sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return chang;
}
int main() {
	double a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	double c1 = chang(a1, b1, a2 ,b2);
	double c2 = chang(a1, b1, a3, b3);
	double c3 = chang(a3 ,b3,a2 ,b2);
	double c = c1 + c2 + c3;
	printf("%.2lf", c);
	return 0;
}