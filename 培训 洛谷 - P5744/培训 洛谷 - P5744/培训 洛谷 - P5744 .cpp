#include<bits/stdc++.h>
using namespace std;
struct xingxi{
	string name;
	int age;
	int f;
}a[100];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].name >> a[i].age >> a[i].f;
	}
	for (int i = 1; i <= n; i++) {
		a[i].f += a[i].f * 0.2;
		if (a[i].f > 600) {
			a[i].f = 600;
		}
		cout << a[i].name << " " << a[i].age + 1 << " " << a[i].f<<endl;
	}
	return 0;
}