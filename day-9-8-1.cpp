//判断char型有无字符
#include <stdio.h>
#include <limits.h>
int main(void)
{
	printf("这个编辑器的char型是：\n");

	if (CHAR_MIN)
		puts("有符号的。");
	else
		puts("无符号的。");

	return 0;
}