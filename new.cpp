/*
可以运用新的函数变量
*/
#include <stdio.h>
int main(void)
{
	int retry;

	do {
		int  no;

		printf("请输入一个整数：");
		scanf_s("%d", &no);

		if (no % 2)
			puts("这个整数是奇数.");
		else
			puts("这个整数是偶数。");

		printf("要重复一次吗？ {yes...0 / no...9} :");
		scanf_s("%d", &retry);
	} while (retry == 0);

	return 0;
}
// 此处引用变量 no， 容易产生误解， 如果把no 换成retry，方便对后续的理解问题。