#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	scanf_s("%c", &c);
	printf("  %c  \n",c);
	printf(" %c%c%c \n", c, c, c);
	printf("%c%c%c%c%c\n", c, c, c, c, c);
	return 0;
}
