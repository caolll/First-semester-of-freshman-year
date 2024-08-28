#include<stdio.h>
int main()
{
	int zuoye, xiaoce, qimo,zong;
	scanf_s("%d %d %d", &zuoye, &xiaoce, &qimo);
	zong = zuoye * 0.2 + xiaoce * 0.3 + qimo * 0.5;
	printf("%d", zong);
	return 0;
}