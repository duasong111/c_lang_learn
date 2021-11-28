//心算训练
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	int x;
	clock_t start, end;  //开始时间，结束时间
	double req_time;     //目的是为了计算所需的时间

	srand(time(NULL)); //采用了随机数。
	a = 100 + rand() % 900;
	b = 100 + rand() % 900;
	c = 100 + rand() % 900;
	printf("%d + %d + %d等于多少：", a, b, c);
	start = clock();  //开始处理的时间
	while (1) {       //无限循环
		scanf_s("%d", &x);  //就是你去猜的数值
		if (x == a + b + c)
			break;   //强制结束进程
		printf("回答错误！！\n请重新输入：");//否则
	}
	end = clock();  //首尾呼应，为了结算时间
	req_time = (double)(end - start) / CLOCKS_PER_SEC;
	printf("用时%.lf秒.\n", req_time);
	if (req_time > 30.0)
		printf("花太长时间了。\n");
	else if (req_time > 17.0)
		printf("还行吧。\n");
	else
		printf("真快啊。\n");


	return 0;
}