/*
显示逆向的值
*/
#include <stdio.h>
int main(void)
{
	int num;

	do {
		printf("请输入一个正整数：");
		scanf_s("%d", &num);
		 
		if (num <= 0)
			puts("请不要输入非正整数：\a");
	} while (num <= 0);

	printf("该正整数的逆向显示值是");

	while (num > 10) {           /*只要num大于10则重新再来一遍*/
		printf("%d", num % 10);  /* 是不是存在一个定理叫做余数优先输出，每次的余数都会先输出*/
		num /= 10;
	}

	puts("。");

	return 0;
}