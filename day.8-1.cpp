//编辑一个等腰直角三角形
#include <stdio.h>
int main(void)
{
	int i, j;
	int len;

	printf("让我们来生成一个三角形\n");
	printf("短边：");
	scanf_s("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= i; j++)  /*此处如果将i 改成 len 则变成正方形了，*/
			                      /*同时，得到的是三角形，宽 若等于 宽， 为何再次声称一遍*/
			//	putchar('*');
			printf(" *");             /*让他变得更松一点而已*/
		putchar('\n');
	}

	return 0;
}