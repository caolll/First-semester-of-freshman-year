#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		n = a;
		a = b;
		b = n;
	}
	if (a > c){
		n = a;
		a = c;
		c = n;
	}
	if (b > c){
		n = b;
		b = c;
		c = n;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}