/*
练习4-9
*/
#include <stdio.h>
int main(void)
{
	int num;
	//int i = 10;
	printf("正整数：");
	scanf_s("%d", &num);
  
	while (num--) {       /*再次就已经限定了输出的个数*/
		if (num % 2)
			putchar('-'); /*若为奇数则末尾输出-*/
		else
			putchar('+'); /* 若为偶数则末尾输出+*/
	}
	// 为啥我没有想到呢？我想到了用if，也想到了求奇偶数，但是那个（num--） 限制却没弄好
	return 0;
}