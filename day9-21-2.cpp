#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a, b, c, d;

	puts("请输入4个整数：");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	printf("%d\n"
		"%d",
		max(max(a, b), max(c, d)), max(max(max(a, b), c), d));

	return 0;
}