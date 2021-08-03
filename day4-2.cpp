/*
练习4-12
*/
#include <stdio.h>
int main(void)
{
	int num;
	int i = 0;
	printf("请输入一个正整数：");
	scanf_s("%d", &num);

	do {
		if (num < 0)
			puts("您输入的数是非正整数");
	} while (num <= 0);

	while (num != 0) {
		num /= 10;
		i++;
	}

	printf("%d的位数是%d\n", num, i);

	return  0;
}