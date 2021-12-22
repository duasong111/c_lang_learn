#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int human;
int comp;
int win_no;
int lose_no;
int draw_no;
const char* hd[] = { "石头","剪刀","麻布" };
void initiallize(void);
void jyanken(void);
void count_no(int result);
void disp_result(int result);
int confirm_retry(void);
int main(void)
{
	int judge;
	int retry;
	initiallize();
	do {
		jyanken();
		printf("我出%s,你出 %s。\n", hd[comp], hd[human]);
		judge = (human - comp + 3) % 3;
		count_no(judge);
		disp_result(judge);
		retry = confirm_retry();

	} while (retry == 1);
	printf("%d胜%d负%d平。\n", win_no, lose_no, draw_no);
	return 0;

}
void initiallize(void)
{
	win_no = 0;
	lose_no = 0;
	draw_no = 0;
	srand(time(NULL));
	printf("猜拳游戏开始！！\n");
}
void jyanken(void)
{
	int i;
	comp = rand() % 3;
	do {
		printf("\n石头剪刀布....");
		for (i = 0; i < 3; i++)
			printf("(%d)%s", i, hd[i]);
		printf(":");
		scanf_s("%d", &human);
	} while (human < 0 || human > 2);
}
void count_no(int result)
{
	switch (result)
	{
	case 0: draw_no++;  break;
	case 1: lose_no++;  break;
	case 2: win_no++;  break;
	}
}
void disp_result(int result)
{
	switch (result)
	{
	case 0: puts("平局。");  break;
	case 1: puts("你输了。");  break;
	case 2: puts("你赢了。");  break;
	}
}
int confirm_retry(void)
{
	int x;
	printf("再来一次吗...(0)否...(1)是：");
	scanf_s("%d", &x);
	return x;
}
//运用了那么多，指针，函数，而且函数的不问特别的多。以及那个变量直接在外侧也是可以执行的