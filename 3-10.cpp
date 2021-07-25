// 练习题设置三个变量，并从中找出他们之间的关系。
#include <stdio.h>
 
int main(void)
{
	int a, b, c;
	
	puts("请输入三个整数。");
	printf("整数A：");	scanf("%d",&a);
	printf("整数B：");	scanf("%d",&b);
	printf("整数C：");	scanf("%d",&c);
	
	if(a == b && b == c)
		printf("三个值都相等");
	else if(a == b || b == c || a == c)
		printf("有两个值相等");
	else
		printf("三个值各不相等");
		
	return 0;
 } 
/* 
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;

	puts("请输入三个整数：");

	printf("整数1是：");   scanf_s("%d", &n1);
	printf("整数2是：");   scanf_s("%d", &n2);
	printf("整数3是：");   scanf_s("%d", &n3);

	if (n1 == n2 == n3)
		puts("则这三个整数相同：");
	else if (n1 > n2 || n1 < n2 || n1 > n3 || n1 < n3 || n2 > n3 || n2 < n3)
		puts("则这三个数不相同");
	else
		puts("有两个值相同");

	return 0;
}
在数学的概率分析一样，将最难得给排除出去，然后你 列举了一大堆，然后嗝屁了。

国军理论，正难则从反来求。
  /*