#include <stdio.h>
#define number 7    //number 等于 7
int main(void)
{
	int i;
	int stu[number];
	int max, min;

	printf("你想输入%d名同学的成绩 \n", number);
	for (i = 0; i < number; i++) {
		printf("%2d号：", i  + 1); // 输出的第一个是一号
		scanf_s("%d", &stu[i]);
	}

	max = min = stu[0];    /* 开始让他们相等，然后在比较*/

	for (i = 1; i < number; i++) {
		if (stu[i] > max)  max = stu[i];  // max 等于最大值
		if (stu[i] < min)  min = stu[i];  // min 等于最小值
	}

	printf("则最高分是%d \n", max);
	printf("则最低分是%d \n", min);


	return 0;
}