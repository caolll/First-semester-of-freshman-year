#include<bits/stdc++.h>
using namespace std;
double ping(int m) {
	int sum = 0, tem, min, max;
	cin >> tem;
	max = tem;
	min = tem;
	sum = tem;
	for (int i = 2; i <= m; i++) {
		cin >> tem;
		if (max < tem)max = tem;
		else if (min > tem)min = tem;
		sum += tem;
	}
	sum -= min + max;
	double ans = 1.0*sum / (m - 2);
	return ans;
}
int main()
{
	int n,m;
	double ans=-1, a;
	cin >> n>>m;
	for (int i = 1; i <= n; i++) {
		a = ping(m);
		if (ans < a)ans = a;
	}
	printf("%.2lf", ans);
	return 0;
}