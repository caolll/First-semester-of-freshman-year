#include<bits/stdc++.h>
using namespace std;
struct xing {
	int y;
	int s;
	int yy;
	int zong;
}a[1000];
int main()
{
	int n;
	int zong = 0,qigu=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].y >> a[i].s >> a[i].yy;
		a[i].zong = a[i].y + a[i].s + a[i].yy;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (abs(a[i].s - a[j].s) <= 5 && abs(a[i].y - a[j].y )<= 5 && abs(a[i].yy - a[j].yy) <= 5 && abs(a[i].zong - a[j].zong) <= 10)qigu++;
		}
	}
	cout  << qigu;;
	return 0;
}