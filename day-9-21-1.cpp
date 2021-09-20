//利用函数宏来编辑函数，更简单
#include <stdio.h>
#define sqr(x) ((x) * (x))
int main(void)
{
	int x;
	double n;
	printf("请输入一个整数");
	scanf_s("%d", &x);

	printf("该数的平方是%d\n", sqr(x));

	printf("请输入一个实数");
	scanf_s("%lf", &n);

	printf("该数的平方和是%f\n", sqr(n));

	return 0;
}