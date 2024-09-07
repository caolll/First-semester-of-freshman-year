//求极差 / 最大跨度值
#include<stdio.h>
int main()
{
	int n, a, max, min,cha;
	scanf_s("%d %d",&n,&a);
	min = a;
	max = n;
	for (int i = 2; i <= n; i++) {
		scanf_s("%d", &a);
		if (max < a)max = a;
		if (min > a)min = a;
	}cha = max - min;
	printf("%d", cha);
	return 0;
}