#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int a = 0;
	getline(cin, s);
	a= s.length();
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ')a--;
	}cout << a;
	return 0;
}