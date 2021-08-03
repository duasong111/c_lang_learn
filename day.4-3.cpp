/*
for 循环的首次登场
*/
#include <stdio.h>
int main(void)
{

	int i, no;

	printf("请输入一个正整数：");
	scanf_s("%d", &no);
	i = 0;
	for (i ; i <= no; i++)    /*看无论是for还是while 在他们括号后边是不加; 这表示结束*/
		printf("%d ", i);
	putchar('\n');

	return 0;
}