/*
工程浩大
*/
#include <stdio.h>
#define NUMBER  80    /*用NUMBER  来代替 80*/
int main(void)
{
	int i, j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};

	printf("请输入学生的人数：");
	do {
		scanf_s("%d",&num);
		if (num < 1 || num > NUMBER)
			printf("\a请输入1~%d的数：", NUMBER);
	} while (num < 1 || num > NUMBER);      /*第一个do循环，目的是要求输入的数字是在100 范围内*/

	printf("请输入%d人的分数。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);  /*利用for 单重数组，得到输入数的递增*/
		do {
			scanf_s("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a请输入1~100的数：");
		} while (tensu[i] < 0 || tensu[i] > 100);    /*第二个do循环，目的是在每个输入的数字在1--100*/

		bunpu[tensu[i] / 10]++;    /*这个是什么玩意*/
	}

	puts("\n---分布图---");
	printf("      100:");

	for (i = 0; i < bunpu[10]; i++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {
		printf("%3d - %3d:", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}