#include<stdio.h>
int main()
{
	int n = 5;
	for (int i = n / 1; i > 0; i--) {
		for (int j = 0; j < n - i; j ++)
			printf(j < i ? " " : "*");
		printf("\n");
	}
	for (int i = 0; i < n; i++)
		printf("*");
	printf("\n");
	for (int i = 1; i <= n / 2; i++)
	{
		for (int j = 0; j < n - i; j++)
			printf(j < i ? " " : "*");
		printf("\n");

	}
	return 0;
}