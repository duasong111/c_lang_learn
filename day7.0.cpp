#include <stdio.h>
int main(void)
{
	int i = 1;
	int n;

	printf("请输入一个整数：");
	scanf_s("%d", &n);

	for (i; i <= n; i++)
		printf("%d", i % 10);   /*同样限定在 1--10之间循环*/
	//i++;  /*这一行意思是和上一行一样，是否都可以执行*/

	printf("\n");

	return 0;
}