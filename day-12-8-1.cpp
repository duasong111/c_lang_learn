//这是进行超级多项的数字练习，并且在扩大视野
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, c; //设置随机变量
	int x;  //输入的数字，来进行那个判断
	int stage;  //作用相当于 i
	int n;  //循环的次数
	clock_t start, end; //用来计时
	srand(time(NULL));  //随机数
	printf("让我们玩一场增大视野的算术吧！！！\n");
	start = clock(); //开始计时了
	for (stage = 0; stage < 10; stage++) { //stage有10次
		a = 10 + rand() % 90; //规定为一百内的数字
		b = 10 + rand() % 90;
		c = 10 + rand() % 90;
		n = rand() % 17;  //这是为了显示空格的数
		printf("%d%*s+%*s%d%*s +%*s%d:", a, n, "", n, "", b, n, "", n, "", c);
		do {  //上边的我要加入双引号的作用是什么呢？
			scanf_s("%d", &x);
			if (x == a + b + c)
				break;  //此时检测我的数值是否正确。
			printf("回答错误。请重新输入：");
		} while (1);  //若你输入的数值不正确，那么就出不来了
	}
	end = clock(); //时间截止
	printf("用时%.lf秒。\n", (double)(end - start) / CLOCKS_PER_SEC);
	//进行本次题目的时间统计。
	return 0;
}