//进行剪刀石头布，但是却不耍赖的那种。
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int human;
	int comp;
	int judge;
	int retry;
	srand(time(NULL));
	printf("猜拳游戏开始了\n");
	
	
	do {
		comp = rand() % 3;
		printf("\n请选择你出的拳<0>..石头,<1>..剪刀,<2>..布::");
		scanf_s("%d", &human);
		printf("我出");
		switch  (comp)  //这是电脑出的
		{
		case 0: puts("石头");  break;
		case 1: puts("剪刀");  break;
		case 2: puts("布");  break;
		}
		printf("\n");
		judge = (human - comp + 3) % 3;

		switch (judge)
		{
		case 0: puts("平局。");    break;
		case 1: puts("你输了。");  break;
		case 2: puts("你赢了。");  break;
		}
		printf("想再来一次吗？...(0)否...(1)是");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}
//其实你很容易想到。他这个明显运运用到了，那个随机变量函数，