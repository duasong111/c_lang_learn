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
	printf("猜拳游戏开始了！！\n");
	do {
		comp = rand() % 3;
		do {
			printf("\n剪刀石头布...(0)石头 （1）剪刀  （2）布：");
			scanf_s("%d", &human);
		} while (human < 0 || human > 2);
		printf("我出：");
		switch (human) {
		case 0: puts("石头");  break;
		case 1: puts("剪刀");  break;
		case 2: puts("麻布");  break;
		}
		printf("你出：");
		switch (comp) {
		case 0: puts("石头");  break;
		case 1: puts("剪刀");  break;
		case 2: puts("麻布");  break;
		}
		printf("\n");
		judge = (human - comp + 3) % 3;
		switch (judge) {
		case 0: puts("平局。");  break;
		case 1: puts("你输了。");  break;
		case 2: puts("你赢了。");  break;
		}
		printf("想再来一次吗？no...0 yes..1 ");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}