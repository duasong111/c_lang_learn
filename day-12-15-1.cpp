#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int i;
	int human;
	int comp;
	int judge;
	int retry;
	const char* hd[] = {"剪刀","布","石头" };
	srand(time(NULL));
	printf("游戏即将开始！！\n");
	do {
		comp = rand() % 3; //随机数是0--1---2
			do {
				printf("\n石头剪刀布...");
				for (i = 0; i < 3; i++)
					printf("(%d)%s", i, hd[i]);
				printf(":");
				scanf_s("%d", &human);
			} while (human < 0 || human > 2);
			printf("我出%s,你出%s.\n", hd[comp], hd[human]);
			judge = (human - comp + 3) % 3;
			switch (judge) {
			case 0: puts("平局。");   break;
			case 1: puts("你输了。"); break;
			case 2: puts("你赢了。"); break;
			default:puts("别瞎出！！！"); break;
			}
			printf("在来一次吗...(0)否（1）是：");
			scanf_s("%d", &retry);
	} while (retry == 1);
	return  0;
}
//这个是利用指针进行的操作，比switch方便，也比二维数组方便