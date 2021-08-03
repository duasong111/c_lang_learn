/*
代码4-12
*/
#include <stdio.h>
int main(void)
{
	int num1, num2;

	printf("正整数：");
	scanf_s("%d", &num2);

	for (num1 = 1; num1 < num2; ++num1)  /* 让num1自加然后到范围num2的界值*/
		putchar('*');               /*有疑问了，既然num++和++num不同当赋值num的时候他们的值也应该不同呀*/
	putchar('*');

	return 0;
}

//为了解答上述疑问，则采用实例子