#include <stdio.h>
int main(void)
{

	int no;
	puts("请输入一个整数：");
	printf("整数是：");    scanf_s("%d", &no);

	if (no > 0)
		if (no % 2 == 0)
			puts("此数为一个偶数");
		else  
			puts("此数为一个奇数");
    else
			puts("此数为负数");

	return 0;
}