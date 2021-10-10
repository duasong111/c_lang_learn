#include <stdio.h>
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;

	//三个数字怎样进行颠倒啊、？
}//为啥此处要进行位置颠倒呢？？？    ：为了能够函数输出
void  sort2(int* n1, int* n2, int* n3)
{
	int max  = *n1;
	
	if (*n2 > * n1)   max = *n2;
	if (*n3 > * n2)   max = *n3;

		swap(n1, n2);   //此时的swap不是对指针的探索啊！！
}

int main(void)
{
	int na, nb, nx;
	puts("请输入两个整数。");

	printf("整数A：");  scanf_s("%d", &na);
	printf("整数B：");  scanf_s("%d", &nb);
	printf("整数c：");  scanf_s("%d", &nx);

	sort2(&na, &nb, &nx);

	puts("经两个数进行升序排列");
	printf("整数A是%d。\n", na);
	printf("整数B是%d。\n", nb);
	printf("整数c是%d。\n", nx);

	return 0;
}