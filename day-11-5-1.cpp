#include <stdio.h>
#define NUMBER  5
void bsort(int a[], int n); //bsort 只是一个函数名
int main(void)
{
	int i;
	int height[NUMBER];  //数组

	printf("请输入%d人的身高\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号：", i + 1);
		scanf_s("%d", &height[i]);  //因为变量是数组，
	}                               //因此输入数组数量的数字
	bsort(height, NUMBER);  //调用函数

	puts("按照升序排列。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d号：%d\n", i + 1, height[i]);

	return 0;
}
void bsort(int a[], int n)
{
	int i, j;  //为何没有任何的影响呢
	for (i = 0; i < n - 1 ; i++) {  //这时候循环是五次
		for (j = n - 1; j > i; j--) { //循环次数
			if (a[j - 1] > a[j]) { //后进行排序？

				/*下边的数字是为了变换目的*/
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}
