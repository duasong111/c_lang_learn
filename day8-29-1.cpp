//尝试一下，利用const，来输出最下的数值
#include <stdio.h>
#define NUMBER 5
int input_min(const int v[], int n) 
{            //const就是声明不改变数组的数值，有无有啥影响吗
	int i;
	int min = v[0];
	for (i = 0; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
}
int main(void)
{
	int i;
	int sore[NUMBER];
	int min_e;
	puts("输入数值n=5个元素");

	printf("请输入%d名同学的分数 \n",NUMBER);
	for (i = 0; i < NUMBER; i++) {   //则利用<=这个符号容易出现问题啊
		printf("NO%d:", i + 1  );
		scanf_s("%d", &sore[i]);
	}

	min_e = input_min(sore, NUMBER);

	printf("则输出的最低分是%d",min_e);

	return 0;
}