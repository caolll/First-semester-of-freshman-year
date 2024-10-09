#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int ans = 0;
	getline(cin, s);
	for (size_t c=0; c < s.length();c++) {
		if (s[c] == 'a' || s[c] == 'd' || s[c] == 'g' || s[c] == 'j' || s[c] == 'm' || s[c] == 'p' || s[c] == 't' || s[c] == 'w' || s[c] == ' ')ans++;
		else if (s[c] == 'b' || s[c] == 'e' || s[c] == 'h' || s[c] == 'k' || s[c] == 'n' || s[c] == 'q' || s[c] == 'u' || s[c] == 'x')ans += 2;
		else if (s[c] == 'c' || s[c] == 'f' || s[c] == 'i' || s[c] == 'l' || s[c] == 'o' || s[c] == 'r' || s[c] == 'v' || s[c] == 'y')ans += 3;
		else if (s[c] == 's' || s[c] == 'z')ans += 4;
	}
	printf("%d", ans);
	return 0;
}