#include <stdio.h>
#define STU_NUM 6
int main(void)
{
	int i;
	int j;
	int score[STU_NUM][2];
	int yw_sum = 0;
	int yw_avg = 0;
	int sx_sum = 0;  /*就是那么多变量有点难搞*/
	int sx_avg = 0;
	for (i = 0; i < STU_NUM; i++){
		//for (j = 0; j < STU_NUM; j++)
		j = 0; //此处为啥那个j的赋值为0 啊！
		//for的单循环已经够解决这个问题了，但是for的双循环是怎样工作呢？？？
		printf("学生%d\n", i + 1);
		printf("语文分数：");
		scanf_s("%d", &score[i][j]);
		yw_sum += score[i][j];
		printf("数学分数：");
		scanf_s("%d", &score[i][j + 1]);
		sx_sum += score[i][j + 1];
	}
	yw_avg = yw_sum / STU_NUM;
	sx_avg = sx_sum / STU_NUM;
	printf("语文总分：%d\n", yw_sum);
	printf("数学总分：%d\n", sx_sum);
	printf("语文平均分：%d\n", yw_avg);
	printf("语文平均分：%d\n", sx_avg);
	for (i = 0; i < STU_NUM; i++)
	{
		printf("学生%d总分为%d,平均分为%d。\n", i + 1, score[i][0] + score[i][1], (score[i][0] + score[i][1]) / 2);
	}
	return 0;
}
//虽然是利用那个单循环吧，但是满足i之后自动跳转