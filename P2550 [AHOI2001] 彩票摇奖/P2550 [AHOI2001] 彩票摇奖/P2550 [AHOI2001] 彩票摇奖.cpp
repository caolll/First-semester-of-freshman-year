#include<bits/stdc++.h>
using namespace std;
int main() {
	int te=0, yi=0, er=0, san=0, si=0, wu=0,liu=0;
	int n,ans=0;
	cin >> n;
	int s[10] = { 0 };
	int b[10] = { 0 };
	for (int i = 0; i <7; i++) {
		cin >> s[i];
		while(n--){
			for (int j = 0; j < 7; j++) {
				if (s[i] == b[j]) {
					ans++;
				}
			}
			if (ans == 7) {
				te++;
				cout << te << " ";
			}
			else if (ans == 6) {
				yi++;
				cout << yi << " ";
			}
			else if (ans == 5) {
				er++;
				cout << er << " ";
			}
			else if (ans == 4) {
				san++;
				cout << san << " ";
			}
			else if (ans == 3) {
				si++;
				cout << si << " ";
			}
			else if (ans == 2) {
				wu++;
				cout << wu << " ";
			}
			else if (ans == 1) {
				liu++;
				cout << liu;
			}
		}
	}
	
	return 0;
}