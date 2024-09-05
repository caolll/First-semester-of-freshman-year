#include<stdio.h>
int main()
{
	int a[1000], min, n,i;
	scanf_s("%d", &n);
	for ( i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	min = a[0];
	for (i = 1; i < n; i++) {
		if (min >=a[i]) {
			min = a[i];
		}
	}
	printf("%d", min);
	return 0;
}