#include <iostream>
#include<math.h>
using namespace std;
int a[101][101] = { 0 };
int main()
{
	int n, m, k;
	int fx, fy;
	cin >> n >> m >> k;
	for (int i = 1; i <= m + k; i++)
	{
		cin >> fx >> fy;
		for (int x = -2; x <= 2; x++)
		{
			for (int y = -2; y <= 2; y++)
			{
				
				if ((i > m || abs(x) + abs(y) <= 2) && (fx + x >= 1 && fx + x <= n && fy + y >= 1 && fy + y <= n))
				{
					a[fx + x][fy + y] = 1;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == 0)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
