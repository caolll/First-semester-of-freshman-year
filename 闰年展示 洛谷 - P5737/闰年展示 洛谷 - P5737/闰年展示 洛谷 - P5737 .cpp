#include<bits/stdc++.h>
using namespace std;
bool run(int y) {
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))return true;
	else return false;
}
int main() {

	int a, b,s=0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (run(i)) {
			s++;
		}
	}
	cout << s<<endl;
	for (int i = a; i <= b; i++) {
		if (run(i)) {
			cout << i << " ";
		}
	}
	return 0;
}