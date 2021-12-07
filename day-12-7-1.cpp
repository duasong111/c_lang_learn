//对于printf，其实还有更牛逼的用法，拿那个输出举例
#include<stdio.h>
int main(void)
{
	int i;  
	int x;
	printf("你想有几行呢？");
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
		printf("%*d\n", i, i % 10);
	  //超级喜欢这个%*d,i,i%10;  直接省略了我两行代码
	return 0;
}