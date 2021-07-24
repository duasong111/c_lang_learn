/*
 learn new ways
*/
#include <stdio.h>
int main(void)
{
	int num1, num2;

	puts("请输入两个整数：");

	printf("整数1是：");    scanf_s("%d", &num1);
	printf("整数2是：");    scanf_s("%d", &num2);

	printf("输出两个数的差是%d.\n", (num1 > num2) ? num1 - num2 : num2 - num1);

	//if (num1 > num2)
	//	printf("输出两个数的差是%d。\n", num1 - num2);
	//else
	//	printf("输出两个数的差值是%d\n", num2 - num1);




	return 0;
}
// learn new ways while dont forget older ways.