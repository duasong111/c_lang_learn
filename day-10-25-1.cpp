#include <stdio.h>
int main(void)
{
	int i;
	int a[4];
	a[0] = a[1] = *(a + 2) = *(a + 3) = 7;  //效果一样的
	        //我在此没有给这些的变量赋予一定的数值
	for (i = 0; i < 4; i++)
		printf("%d a[%d] \n", i, a[i]);

	return 0;
}