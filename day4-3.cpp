// 对于代码4-3的加强版  倘若非正整数则要求重新输入
/*
对于for的巩固在线
*/
#include <stdio.h>
int main(void)
{
	int num1, num2;

	do {
		printf("请输入一个正整数：");
		scanf_s("%d", &num2);

		if (num2 < 0)
			puts("您输入的是一个非正整数。");

	} while (num2 < 0);      /*当输入变量的值小于0是则进行do循环。*/

	num1 = 0;

	for (num1; num1 <= num2; num1++)   /*注意，三个量之间是";" 而并非“,’”,*/
		printf("%d ", num1);
	putchar('\n');

	return 0;
}