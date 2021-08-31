/*
进行顺序查找
*/
#include <stdio.h>
#define  NUMBER 5
#define  FAILED -1  //为查找失败而设定的

int search(const int v[], int key, int n)
{
	int i = 0;

	while (1) {
		if (i == n)
			return FAILED;
		if (v[i] == key)
			return i;
		i++;   //逐过程进行查找。
	}
}
int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]:", i);
		scanf_s("%d", &ky);  //为了你对数据的输入
	}
	printf("要查找的值：");
	scanf_s("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED) 
		puts("\a 查找失败。");
	else
		printf("%d是数组的第%d号元素。\n", ky, idx + 1);
	
	return 0;
}