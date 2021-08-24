#include <stdio.h>
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}
int main(void)
{
	int i, len;

	printf("输入一个左下角是直角的三角形.");
	printf("短边：");
	scanf_s("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}
//对于上边的函数可以用int 然后在用for 但是相比while的确繁琐了好多，
//其次那个在那个put_stars中也并没有感觉比双重的for简便多少，