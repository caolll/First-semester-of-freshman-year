#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%.9lf",(double) a / b);
	return 0;
}