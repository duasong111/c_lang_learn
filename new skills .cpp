/*
学习新的符号语言
*/
#include <stdio.h>
int main(void)
{
	int n1, n2, max;
	printf("请输入两个整数：\n");

	printf("整数1是：");    scanf_s("%d", &n1);
	printf("整数2是：");    scanf_s("%d", &n2);

	max = (n1 > n2) ? n1 : n2;

	printf("则输入较大的数是%d.\n", max);

	// 自从运用了 ？ 则完全把 if 语句给替换掉了。 yyds



	return 0;
}