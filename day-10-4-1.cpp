//字符串数组
#include <stdio.h>
int main(void)
{
	int i;
	char cs[][6] = { "turbo","naaaa","dohc" };
	  //此处的数组[6]则是限制括号内的数字
	for (i = 0; i < 3; i++)

		printf("cs[%d] = \"%s\"\n", i, cs[i]);
      //其实那个\"%s\"的作用就是为了多出 " "的，因为单个斜杠不显示
	return 0;
}