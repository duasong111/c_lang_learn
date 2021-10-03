#include <stdio.h>
int combination(int n, int r);
int main(void)
{
	int n, r;
	printf("n:");
	scanf_s("%d", &n);
	printf("r:");
	scanf_s("%d", &r);
	printf("combination(%d,%d) = %d\n", n, r, combination(n, r));
	return 0;
}
int combination(int n, int r)
{
	int y;
	if ((r > 1) && (r < n)) //一个是为了实数，同时满足不能大于
	{                       //你所求的数值
		y = combination(n - 1, r - 1) + combination(n - 1, r);
	}
	else if ((r == n) || (r == 0))
	{
		y = 1;
	}
	else if (r == 1)
	{
		y = n;
	}
	return y;
}
//三种考虑情况都考虑到了，这思维真的是十分严谨啊