//利用指针来计算和以及差
#include <stdio.h>
void sum_diff(int n1, int n2, int* sum, int* diff);
int main(void)
{
	int num1, num2;
	int sum1 = 0, differ = 0;

	printf("请输入任意的两个整数.");

	printf("num1：");  scanf_s("%d", &num1);
	printf("num2：");  scanf_s("%d", &num2);

	sum_diff(num1, num2, &sum1, &differ);

	printf("则这两个数字的和是%d\n, 他们的差是%d", sum1, differ);

	return 0;
}
void sum_diff(int n1, int n2, int *sum, int *diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? (n1 - n2) : (n2 - n1);

}

//sum:其实在指针当中就是相当于一个暗号 *     & 他俩会相互呼应