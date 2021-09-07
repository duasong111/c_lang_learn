//利用函数来写幂函数
#include <stdio.h>
double power(double x, int n);
int main(void)
{
	double a;
	int b;
	printf("请输入a的b次幂是\n");

	printf("实数a是");   scanf_s("%lf", &a);
	printf("实数b是");   scanf_s("%d",  &b);

	printf("%.2f的%d次幂是%.2f", a, b, power(a, b));
	  // 注意此处的对应关系 a 对应的是 %lf， b 对应的是 %d
	return 0;
}
double power(double x, int n) {
	int i;
	int tmp = 1.0;
	for (i = 1; i <= n; i++)
		tmp *= x;  // tmp = 1 * x * x  这样就是能显示他的幂函数了
	return tmp;
}
