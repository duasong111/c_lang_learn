/*
输出两个数中较大的那个
*/
#include <stdio.h>
int max2(int a, int b)
{
	if (a > b)
		return a;
	if (b > a)
		return b;
}
int main(void)   // kanlaiyaoxuexi duandian l 
{
	int n1, n2;
	puts("请输入两个整数。");
	printf("整数1：");  scanf_s("%d", &n1);
	printf("整数2：");  scanf_s("%d", &n2);

	printf("较大整数的值是%d. \n", max2(n1, n2));

	return 0;
}

//利用函数进而比较数值的大小，既省略了数组的繁琐，也少了那个带入底单变量。