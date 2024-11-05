#include <iostream>
using namespace std;
int w, x, h,  q;
int a[21][21][21];
int main()
{
    cin >> w >> x >> h >> q;
    int ans = w * x * h;
    while (q--)
    {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <=  y2; j++)
            {
                for (int k = z1; k <= z2; k++)
                {
                    if (a[i][j][k] == 0) {
                        ans--;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}