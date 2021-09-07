/*
静态储存期和动态储存期
*/
#include <stdio.h>
int fx = 0;
void func(void);

int main(void)
{
	int i;
	puts("ax sx fx");
	puts("----------");
	for (i = 0; i < 10; i++)
		func();   //调用函数
	puts("----------");

	return 0;
}
void func(void)  //里边的i不就是相当于 ax  fx sx的逐渐递增
{
	static int sx = 0;  //自动储存期
	int        ax = 0;   //每次到这个都会执行，ax = 0 的结果 
	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}