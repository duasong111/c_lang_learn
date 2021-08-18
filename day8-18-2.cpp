//解锁新的技术
#include <stdio.h>

#define NUMBER 5   //看来此处的number是否大写都不重要啊！
int main(void)     // 其实那个新的定义就是等于5 这个数字
{
	int i;
	int stu[NUMBER];  //若没有上述那么在中括号里则是添加数字
	int sum = 0;

	printf("请输入%d名同学的分数\n", NUMBER);

	for (i = 0; i < NUMBER; i++) {   //原来的5被现在替换成了number
		printf("%2d号:", i + 1);
		scanf_s("%d", &stu[i]);  // 这些和之前的操作进行的有一样。
		sum += stu[i];
	}

	printf("得到的数字总和是%d\n", sum);
	printf("则得到的平均值是%.2f\n", (double)sum / NUMBER);

	return 0;
}