//进行多维数组的学习
//进行分多维数组的训练
#include <stdio.h>
int main(void)
{
	int i, j;
	int sore1[4][3] = { { 1 ,2 ,3 }, { 4, 5, 6 }, { 23, 23, 45 } ,{23,34,45,} };
	int sore2[4][3] = { { 12 ,22 ,53 }, { 64, 75, 46 }, { 3, 2, 45 },{ 23, 23, 45 } };
	int sum[4][3];

	
	for (i=0;i < 4;i++){
		for(j=0;j<3;j++)
			sum[i][j] = sore1[i][j] + sore2[i][j];
	}
	puts("显示第一次的考试分数：");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sore1[i][j]);
		putchar('\n');
	}

	puts("显示第二次的考试分数：");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sore2[i][j]);
		putchar('\n');
	}
	puts("总分：");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}
	return 0;
}
//其实这个多