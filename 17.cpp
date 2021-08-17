//项目5-6
#include <stdio.h>
int main(void)
{
	int i;
	int a[5] = { 12, 23, 34 };
	int b[5];

	for (i = 0; i < 5; i++)
		b[i] = a[5 - 1 - i];    /*将未知数赋值到已知数上边*/

	puts(" a   b");
	puts("--------");

	 for (i = 0; i < 5; i++)
	printf("%3d%3d \n", a[i], b[i]);

	return 0;
}
//能得到与a输出顺序相反的数字