//��������
#include<stdio.h>
int main()
{
	int n, x, cishu=0;
	scanf_s("%d %d", &n, &x);
	//ö��i�������x���ִ���
	for (int i = 1; i <= n; i++) {
		//��ö�ٵ������
		//����һ�Ա�
		int a, b;
		a = i;
		while (a != 0) {
			//���ѭ����ֱ��0
			b = a % 10;
			a = a / 10;
			if (b == x)cishu++;
		}
	}
	printf("%d", cishu);
	return 0;
}
