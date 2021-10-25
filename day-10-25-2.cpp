#include <stdio.h>
int main(void)
{
	int i;
	int a[5] = { 1,3,4,5,6 };
	int* p = a;
	

	for (i = 0; i < 5; i++)
		printf("%d, a[%d],p[%d] s[%d],,%d\n", i, a[i],p[i],i[p],*(p + i));

	return 0;
}
//承接上一个所说的，其实表达不一样，但是取地址是一样的