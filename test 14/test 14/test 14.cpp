#include<stdio.h>
int main()
{
	int daxiang = 20000;
	int h, r;
	scanf_s("%d%d", &h, &r);
	int rongji = r * r * h *3.14;
	double geshu = daxiang / rongji;
	int c = geshu+ 1;
	printf("%d",c);
	return 0;
}
