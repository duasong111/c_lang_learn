/*
练习
*/
#include <stdio.h>
int main(void)
{
	int num1, num2;

	printf("请输入第一个整数：");
	scanf_s("%d", &num1);

//	printf("请输入第二个整数：");
	scanf_s("%d", &num2);
	num1 >= 0;
	while (num1 <= num2) {

		//	printf("%d ", num1++);
		if (num1 % 2 == 0)
			printf("%d ", num1++);
		else
			printf("%d ", num1++ - 1);
	}
	printf("\n");


	return 0;
}
//为撒子我这个都是输入双重复的啊
