#include <stdio.h>


int main(void)
{
	int number1;

	printf("请输入一个整数");

	scanf_s("%d", &number1);

	if (number1 == 0)
		puts("该数等于0");
	else if (number1 > 0)
		puts("该数为正数");
	else
		puts("该数为负数");

	return 0;
}