#include <stdio.h>
int main(void)
{
	int num;
	int ans = 7;
	printf("玩一个猜数游戏，数字范围是1--9.");
	do {
		printf("你输入的数字是：");
		scanf_s("%d", &num);

		if (num > ans)
			puts("你猜的大了，再来。\n");
		else if (num < ans)
			puts("你猜的小了， 再来\n");
	} while (num != 7);
	               //也要注意代码的美观啊。
	printf("congratulation, you are right!\n");

	return 0;
}
//最低阶的猜数游戏