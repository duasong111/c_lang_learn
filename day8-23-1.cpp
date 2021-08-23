//利用函数来计算那个次幂函数。
#include <stdio.h>

double power(int x, int n)
{
	int i;
	int tmp = 1.0;
	for (i = 1; i <= n; i++)
		tmp *= x;  //上次学习的那个tmp = tmp * x * n（n个x）
	return  tmp;
}
int main(void)
{
	double a;
	int b;

	puts("a的b次幂是：");
	printf("整数a是：");  scanf_s("%lf", &a);
	printf("整数b是：");  scanf_s("%d", &b);

	printf("%.2f的%d的数是%.2f", a, b, power(a, b));
	//再输入那个double 或者 int时注意scanf_s和printf的输出格式
	return 0;
}