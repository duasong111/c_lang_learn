//函数的阶乘
#include <stdio.h>
int factorical(int n);
int main(void)
{
	int num;
	do {
		
		printf("请输入一个正整数：");
		scanf_s("%d", &num);
		if (num < 0)
			puts("你输入的数字不符合规范");
	} while (num <= 0);
	
	//此处的do——while循环，记住那个变量控制在do循环的外侧

	printf("%d的阶乘是%d。\n", num, factorical(num));

	return 0;
}
int factorical(int n)
{
	if (n > 0)
		return n * factorical(n - 1);
	else
		return 1;
}
