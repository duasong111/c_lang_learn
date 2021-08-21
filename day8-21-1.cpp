//代码清单6-2
#include <stdio.h>
int max3(int a, int b, int c)
{
	int  max = a;
	if (b > max) max = b;
	if (c > max) max = c;    //也是一个变量先赋值，然后在进行比较，优先输出较大值
	return  max;  //得到最大值然后是max然后返回
}
int main(void)
{
	int a, b, c;     //一定要输入这三个变量名

	puts("请输入三个整数：");

	printf("整数a是："); 
	scanf_s("%d", & a);
	printf("整数b是：");
	scanf_s("%d", &b);
	printf("整数c是：");
	scanf_s("%d", &c);

	printf("得到三个数字的最大值是%d", max3(a, b, c));

	return 0;
}