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
//为解决上述问题则添加大括号则更方便
/*if (no > 0) {
		if (no % 2 ==0)
		puts("该整数为偶数。");
	else
		puts("该整数为奇数。");
	}
	else {
		puts("您输入的不是正数。");
	}
    */
    //这样就浅显易懂了。