//代码5-8
#include <stdio.h>
int main(void)
{
	int i;
	int x[7];

	for (i = 0; i < 7; i++) {
		printf("x[%d]:", i);  //输入编码 
		scanf_s("%d", &x[i]); //为了输入自己设置的变量
	}

	for (i = 0; i < 3; i++) {
		int tmp = x[i];     // 引入新的中界值
		x[i] = x[6 - i];    // 这样只能倒换一半
		x[6 - i] = tmp;     // 倒换另一半
	}

	puts("倒序排列了。");    //后续的工作和之前的代码是一样的。
	for (i = 0; i < 7; i++)
		printf("x[%d] = %d\n", i, x[i]);
	return 0;
}