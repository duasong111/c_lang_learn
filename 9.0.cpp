//试试continue语句
#include <stdio.h>
int main(void)
{
	int i, j;
	//int len;

	puts("让我们得到一个低配版九九乘法表");
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int seki = i * j;        /*引入seki*/
			if (seki % 10 == 4 || seki / 10 == 4) {  /*将带4的全部剔除*/
				printf(" ");
				continue;
			}
			printf("%3d ", seki);  /*小数三位数*/
		}
		putchar('\n');
	}

	return 0;
}