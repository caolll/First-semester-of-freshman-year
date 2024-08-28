#include<stdio.h>
int main()
{
	int a, b, c,a1,b1,c1;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a <b&&a<c) {
		a1 = a;
		b1 = b;
		c1 = c;
	}
	else if (b <a && b < c) {
		a1 = b;
		b1 =a ;
		c1 =c ;
	}
	else if (c <a && c <b) {
		a1 = c;
		b1 = b;
		c1 = a;
	}
	if (b1 < c1) {
		printf("%d %d %d", a1, b1, c1);
	}
	if (c1 <b1) {
		printf("%d %d %d", a1, c1, b1);
	}
	return 0;
}