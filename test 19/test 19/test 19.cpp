#include<stdio.h>
int main()
{
	int n, beizi;
	double yingliao;
	float t;
	scanf_s("%f %d", &t, &n);
	yingliao = t / n;
	beizi = n * 2;
	printf("%.3lf\n%d", yingliao, beizi);
	return 0;
}