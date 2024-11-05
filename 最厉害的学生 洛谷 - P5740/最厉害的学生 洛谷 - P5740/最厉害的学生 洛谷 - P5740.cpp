#include<bits/stdc++.h>
using namespace std;
struct xing {
	string name;
	int y=0, shu=0, yy=0, zong=0;
};
int main()
{
	xing s[1005];
	int n,mark,max=0,t;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].name >> s[i].y >> s[i].shu >> s[i].yy;
		t = s[i].y + s[i].shu + s[i].yy;
		if (t > max) {
			max = t;
			mark = i;
		}
	}
	cout << s[mark].name << " " << s[mark].y << " ";
	cout << s[mark].shu << " " << s[mark].yy;
	return 0;
}