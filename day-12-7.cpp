//换个方向进行弹幕的消除
#include <time.h>
#include <stdio.h>
#include <string.h>
int sleep(unsigned long x);
int main(void)
{
	int i;
	int cnt = 0;
	char name[] = "你是不是个沙雕";  //引子
	int name_len = strlen(name);  //检测字符串的数目

	while (1) {
		putchar('\b');  //转移到本行行头
		for (i = 0; i < name_len; i++) {
			if (cnt + i < name_len)
				putchar(name[cnt + i]);
			else
				putchar(name[cnt + i - name_len]);
		}  //就是一直循环呗。
		fflush(stdout);
		sleep(500);

		if (cnt > 0)
			cnt--;
		else
			cnt = name_len - 1;
	}

	return 0;
}
int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) = (clock_t)-1)
		return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}
