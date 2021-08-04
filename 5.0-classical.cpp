#include <stdio.h>
int main(void)
{
	int no;
	int i = 0;
	int no1;
	printf("请输入一个正整数：");
	scanf_s("%d", &no);
	no1 = no;
	while (no != 0)
	{
		no /= 10;
		i++;
	}
	printf("%d的位数是%d\n", no1, i);  /*此处的no1的目的就是为了表示输入的数字*/
	return 0;
}
//以及对于while的那个让所有值的逆向显示，留意。