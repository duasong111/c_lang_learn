//输入一个数，然后计算从1到n的值。

#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;

	int n1 = n;      /*又是巧妙的转换，但是我不会*/
	printf("n的值：");
	scanf_s("%d", &n);
	
	while (n > 0)
	{
		sum = sum + n;
		n--;
	}
	printf("1到%d的和是%d\n", n1, sum);
	return 0;
}

