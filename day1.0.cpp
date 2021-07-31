#include <stdio.h>
int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf_s("%d", &no);

	while (no >= 0) {
		printf("%d", no);
		no--;
	}
	printf("\n");

	return 0;
}
//得到  ++ 后置递增运算符。而-- 则用于后置递减运算符，
// 同时还有 sum = sum + t 则等于 sum += t， 这样则就取代了4-3的多半行运算