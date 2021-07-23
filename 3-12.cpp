
#include <stdio.h>
int main(void)
{
	int n1, n2, max;

	puts("请输入两个整数：");
	printf("整数1是：");  scanf_s("%d", &n1);
	printf("整数2是：");  scanf_s("%d", &n2);
	
	if (n1 > n2) max = n1; else max = n2;

	printf("则输入的最大值是%d\n", max);

	return 0;

}
//如果位置不一样那么出现的效果当然也是不同滴,但是要是改动一下位置却不执行了。
//if (n1 > n2) n1 = max; else n2 = max; 如果不信可以试试
