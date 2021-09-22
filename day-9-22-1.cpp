#include <stdio.h>
#define puts_alert(str) (putchar('\a'),puts(str))
int main(void)
{
	int n;
	printf("请输入一个整数：");
	scanf_s("%d", &n);

	if (n)
		puts_alert("这个数不是0.");
	else
		puts_alert("这个数是0");
	return 0;
}


//#define puts_alert(str) (putchar('\a'),puts(str))
//这个对于如果是中括号或者是在putchar（'\n'）后边加上那个; 这不能进行编辑，这就是逗号运算符的作用吧。