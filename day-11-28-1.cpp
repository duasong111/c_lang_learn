//设置一个让字母消失的小游戏
#include <time.h>
#include <stdio.h>
int sleep(unsigned long x);  //你若没有这个函数，那么sleep就不运行
int main(void)
{
	printf("my name is zhangsan");
	fflush(stdout);

	sleep(3000);
	printf("\rwhat do you name?  ");
	fflush(stdout);

	sleep(3000);
	printf("\rsomeday ti will become a successful  people");
	fflush(stdout);

	sleep(3000);
	printf("\r best man");   
	fflush(stdout);

	return 0;
}
int sleep(unsigned long x)  //给他背下来，
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	  //这个也太神奇了吧。
	return 1;
} 