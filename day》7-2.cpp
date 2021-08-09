// 代码4-20
#include <stdio.h>
int main(void)
{
	int retry;

	do {
		int i, no;

		do {
			printf("请输入一个正整数：");
			scanf_s("%d", &no);
			if (no <= no)
				puts("您输入的是非正整数");
		} while (no <= 0);         /*都循环*/

		for (i = 1; i < no; i++)   /*简单的for输入*/
			putchar('*');
		putchar('\n');

		printf("您还想在来一遍吗？ [yes...0/no...9]:");
		scanf_s("%d", &retry);
	} while (retry == 0);   /* 赋值再来一圈*/

	return 0;
}