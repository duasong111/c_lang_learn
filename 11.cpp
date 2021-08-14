#include <stdio.h>
int main(void)
{
	int i;
	int o;
	int p;
	int sum = 0;

	printf("请输入三位同学的分数。\n");

	
	printf("1号：");  scanf_s("%d", &i);  sum += i;
	printf("2号：");  scanf_s("%d", &o);  sum += o;
	printf("3号：");  scanf_s("%d", &p);  sum += p;

	printf("总分：%d\n", sum); /*输入3d和d有啥区别吗？*/
	printf("平均分：%3.1f\n", (double)sum / 3);

	return 0 ;
}
//进入第5章，数组