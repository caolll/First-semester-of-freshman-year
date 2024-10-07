#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	bool a = true;
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1]) a = false;
		break;
	}
	if (a)cout << "yes";
	else cout << "no";
	return 0;
}