//不使用递归的方法进行来进行计算
#include <stdio.h>
int factorical(int n);
int main(void)
{
	int num;

	printf("请输入一个正整数：");
	scanf_s("%d", &num);

	printf("%d的阶乘的%d", num, factorical(num));
	

	return 0;
}

int factorical(int n)
{
	int i, res = 1;
	 
	for (i = n; i > 0; i--) {
		res *= i;
	}

	return res;
}
