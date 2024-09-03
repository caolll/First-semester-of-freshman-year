#include<stdio.h>
int main()
{
	int s, v, t, h, f,a;
	scanf_s("%d %d", &s, &v);
	t = s / v ;
	if (s % v != 0) {
		t += 1;
	}t += 10;
	if (8 * 60 > t) {
		a = 8 * 60 - t;
	}
	else a = 24 * 60 + 8 * 60 - t;
	h = a / 60;
	f = a % 60;
	if (h < 10) {
		if (f < 10)printf("0%d:0%d", h, f);
		else printf("0%d:%d", h, f);
	}
	else if (f > 10)printf("%d:%d", h, f);
	else printf("%d:0%d", h, f);
	return 0;
}