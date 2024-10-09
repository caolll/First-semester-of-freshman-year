#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] + n <= 'z')s[i] = s[i] + n;
		else s[i] = s[i] + (n-26)%26;
		
	}
	cout << s;
	return 0;
}