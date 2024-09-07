//计数问题
#include<stdio.h>
int main()
{
	int n, x, cishu=0;
	scanf_s("%d %d", &n, &x);
	//枚举i，并算出x出现次数
	for (int i = 1; i <= n; i++) {
		//将枚举的数拆分
		//并逐一对比
		int a, b;
		a = i;
		while (a != 0) {
			//逐次循环，直到0
			b = a % 10;
			a = a / 10;
			if (b == x)cishu++;
		}
	}
	printf("%d", cishu);
	return 0;
}
