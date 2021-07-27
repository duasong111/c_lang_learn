/*
练习3-13
*/
#include <stdio.h>
int main(void)
{
	int season;

	printf("请输入一个整数：");
	scanf_s("%d", &season);

	switch (season) {

	case 3 :
	case 4 :
	case 5 : puts("此月是春季");    break;
		 
	case 6 :
	case 7 : 
	case 8 : puts("此月是夏季：");   break;

	case 9 : 
	case 10:
	case 11: puts("此月是秋季：");  break;

	case 12:
	case 1 :
	case 2: puts("此月是冬季：");  break;

	default: printf("该月份不存在：\n", season > 10);

	}

	return 0;
}