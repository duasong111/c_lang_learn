/*
打字贼多的
*/
#include <stdio.h>
int main(void)
{
	int month;
	printf("请输入月份：");
	scanf_s("%d", &month);
	if (month >= 3 && month <= 5)
		printf("%d月是春季。\n", month);
	else if (month >= 6 && month <= 8)
		printf("%d月份是夏季。\n", month);
	else if (month >= 9 && month <= 11)
		printf("%d月份是秋季。\n", month);
	else if (month == 1 || month == 2 || month == 12)
		printf("%d月份是冬季。\n", month);
	else 
		printf("%d月不存在！！\a\n", month);

	return 0;
}