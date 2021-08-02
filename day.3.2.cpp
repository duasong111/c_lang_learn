/*
还待让我重新打一下
*/
#include <stdio.h>
int main(void)
{
	int n = 1;
	int sum = 0;
	int tem, num;

	printf("要输入多少个整数：");
	scanf_s("%d", &num);    /*在此输入你想输入多少个No*/

	while (n <= num) {
		printf("No.%d:", n++);
		scanf_s("%d", &tem);    /* tem是你每一个num输入的数值*/

		sum += tem;   /* sum则为输入数值的总和*/
	}
	printf("输入的数值总和是%d", sum);
	printf("则平均数是%.2f", (double)sum / num);  /*没有忘记那个%.2f的意思，以及后边为啥要加入（doouble）*/


	return  0;
}