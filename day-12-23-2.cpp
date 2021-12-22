//技巧性的东西
#include <stdio.h>
int num1;
int num2;       //在这个设置变量的时候，不一定一定在函数内，
int main(void)
{
	printf("请输入两个数");
	scanf_s("%d %d", &num1, &num2);
	printf("两个数的和是%d", num1 + num2);
	return 0;
}