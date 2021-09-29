#include <stdio.h>
void up_and_down(int);
int main(void)
{
	up_and_down(1);
	return 0;
}
void up_and_down(int n)
{
	printf("Level %d: n location %p\n", n, &n);

	if (n < 2)
		up_and_down(n + 1);  //枚举的自动加一系统，
//	printf("LEVEL  %d: n location %p\n", n & n);
}