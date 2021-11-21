//猜数游戏，进阶版
//结合以上所学，进行一个综合，，玩到你哭
#include<time.h>
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int num;
	int ans;
	const int max_stage = 10;  //限制你猜数的次数
	int remain = max_stage;    //提醒你猜数
	srand(time(NULL));
	ans = rand() % 1000;

	printf("请猜一个0---999的整数。\n\n");
	do {
		printf("还剩下%d次机会。是多少呢？：\n",remain);
		scanf_s("%d", &num);
		remain--;
		if (num > ans)
			puts("猜大了\n");
		else if (num < ans)
			puts("猜小啦\n");
	} while (num != ans && remain > 0);
	if (num != ans)
		printf("很遗憾，正确的答案是%d", ans);
	else {
		printf("回答正确\n");
		printf("您用了%d次猜中了。\n", max_stage - remain);
	}
	

	return 0;
}