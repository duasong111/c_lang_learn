#include <stdio.h>
void adjust_point(int* n);
int main(void)
{
	int num;

	puts("请输入一个整数:");
	scanf_s("%d", &num);
	
	adjust_point(&num);

	//printf("对该数进行整形判断");

	printf("则该数的整形是%d", num);


	return 0;
}
void  adjust_point(int* n)
{
	if (*n <= 0)
		*n = 0;
	else if (*n >= 1 )
		*n = 100;
}