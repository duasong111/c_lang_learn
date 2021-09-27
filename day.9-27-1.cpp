//利用冒泡函数法进行排序
#include <stdio.h>
#define NUMBER 5   //此处利用数组
void bsort(int a[], int n);
int main(void)
{
	int i;
	int height[NUMBER];

	printf("请输入%d名人数的身高", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号：", i + 1);
		scanf_s("%d", &height[i]);
	}
	bsort(height, NUMBER);   //引用函数

	puts("按升序排列。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d号：%d\n：", i + 1, height[i]);
	return 0;
}
void bsort(int a[], int n)  //其实真正的排列在这呢！！
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}

}