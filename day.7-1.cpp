// 显示一个三角形
#include <stdio.h>
int main(void)
{
	int i, j;
	int len;

	puts("输入三角形短边的长是：");
	printf("短边");
	scanf_s("%d", &len);

	for (i = 1; i <= len; i++) {   /*则显示有i行*/
		for (j = 1; j <= len - i; j++)
			putchar(' ');      /*则利用减法，没有显示的部分其实是空格部分。*/
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}