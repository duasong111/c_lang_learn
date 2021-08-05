//比着while真的是更加的简洁。
#include <stdio.h>
int main(void)
{
	int a ;
	int b ;  /* b的赋值没有那么重要 */
	int max = 0;  /*max的赋值一定初始为0*/

	printf("你想得到从1到几的值？");
	scanf_s("%d", &b);

	for (a = 1; a <= b; a++) {
		max += a;   /*似曾相识的感觉*/
	}

	printf("他们输出的和是%d", max);

	return 0;
}