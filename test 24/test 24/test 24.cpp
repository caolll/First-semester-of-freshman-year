#include<stdio.h>
int main()
{
	double m, h, BMI;
	scanf_s("%lf %lf", &m, &h);
	BMI = m / h / h;
	if (BMI < 18.5) {
		printf("Underweight");
	}
	if (18.5<=BMI&&BMI < 24) {
		printf("Normal");
	}
	if (BMI>=24){
		printf("%.4lf\n", BMI);
		printf("Overweight\n");
	}
	return 0;
}