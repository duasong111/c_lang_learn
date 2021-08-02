//学习新的输入 "putchar” 也成为单字节输入。
#include <stdio.h>
int main(void)
{
	//putchar('abs');
	//putchar('34');

	int num;

	printf("请输入一个整数：");
	scanf_s("%d", &num);

	while (num-- > 0)  /* 此处num--换成num++或者num...然后输入变量，则乱码*/
		putchar('*');
	putchar('\n');

	
	return 0;
}