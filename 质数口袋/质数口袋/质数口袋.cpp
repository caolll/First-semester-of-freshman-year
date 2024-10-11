#include <iostream>
using namespace std;
int main() {
    int L;
    cin >> L;
    int sum = 0, g = 0;
    for (int i = 2;; i++) {
        bool zhishu = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) { zhishu = false; break; }
        }
        if (zhishu) {
            sum += i;
            if (sum <= L) {
                cout << i << endl;
                g++;
            }
            else break;

        }

    }
    cout << g;
    return 0;
}