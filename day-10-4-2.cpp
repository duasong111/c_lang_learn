#include <stdio.h>
int str_length(const char s[]);
int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf_s("%s", str);
	  //遇到有关%s的全部都闷屁了
	printf("字符串\"%s\"的长度是%d。\n", str, str_length(str));

	return 0;
}
int str_length(const char s[])
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}