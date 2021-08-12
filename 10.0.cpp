//有关continue 语句如下
#include <stdio.h>
int main(void)
{
	int i, j;
	int sum;

	printf("让我们输入一个九九乘法表（有残缺版）\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			int sum = i * j;   /*当出现问题时，不要想着从头再来，要想着找出问题*/
			if (sum % 10 == 4 || sum / 10 == 4) {
				printf(" ");
			continue;        /* 就是涵盖上述则要继续，也就是跳出程序 */
			}
			printf("%3d", sum);
		}

		putchar('\n');
	}
	return 0;
}