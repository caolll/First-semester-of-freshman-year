#include<stdio.h>
int main() {
	char a;
	int b;
	float c;
	double d;
	scanf_s("%c%d%f%lf", &a, &b, &c, &d);
	printf("%c %d %f %.6lf", a, b, c, d);
	return 0;
}
