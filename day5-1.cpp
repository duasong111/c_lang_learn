// 此操作同while，只不过是换成了for的操作
/*
规定输入的数的个数以及求他们的和以及平均值
*/
#include <stdio.h>
int main(void)
{
	int i = 0;
	int sum = 0;
	int cnt, tmp;

	printf("您想输入多少个数：");
	scanf_s("%d", &cnt);

	for (i; i < cnt; i++) {
		printf("No.%d:", i + 1);  /*为啥i要加1 因为其实给i的赋值是0，为了增加可读性*/
		scanf_s("%d", &tmp);    /*此处的tmp，就是每次你所输入的值*/

		sum += tmp;   /* sum = sum + tmp, 此时sum=0，也就是求所有tmp的和 */
	}

	//printf("则他们的总和是%d以及他们的平均值是%.2f", sum, (double)sum / cnt);

	printf("他们的总和是%d", sum);
	printf("则他们的平均值是%.2f", (double)sum / cnt);


	return 0;
}