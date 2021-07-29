#include <stdio.h>
int main(void)
{
	int sum = 0;
	int cnt = 0;
	int retry = 0;

	do {
		int t;

		printf("请输入一个整数：");
		scanf_s("%d", &t);

		sum = sum + t;
		cnt = cnt + 1;
		printf("是否要继续啊？<yes...0/no...9>:");
		scanf_s("%d", &retry);
	} while (retry == 0);

	printf("和是%d,平均数是%.2f。\n", sum, (double)sum / cnt);



	return 0;
}