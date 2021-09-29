//；练习8-8，那个球最大公约数的
#include <stdio.h>
int gcd(int x, int y)
{
	int z;   // 充当公因数
	if (x != y)  //就是要最终的结果使这两个数相等
	{
		if (x > y)
			x -= y;  // x= x - y
		else
			y -= x;
		z = gcd(x, y);  //再次调用函数
	}
	else
		z = x;
	return z;
}
int main(void)
{
	int x, y;
	printf("x:");
	scanf_s("%d", &x);
	printf("y:");
	scanf_s("%d", &y);
	printf("gcd(%d,%d) = %d\n", x, y, gcd(x, y));
	return 0;
}

