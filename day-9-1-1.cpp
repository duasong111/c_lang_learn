/*入力让自己变得更加的优秀*/
//哨兵查找法
#include <stdio.h>
#define NUMBER  5
#define FAILED -1

int search(int v[], int key, int n)
{
	int  i = 0;
	v[n] = key;

	while (1) {
		if (v[i] == key)
			break;  //查找成功
		i++;  
	}

	return  (i < n) ? i : FAILED;   
}        //要么输出i，但是如果i>n时则查找失败，，，妙哉妙哉
int main(void)
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]", i);
		scanf_s("%d", &vx[i]);
	}

	printf("请输入您所要查找的数值：\n");
	scanf_s("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED)
		puts("查找失败。\n");
	else
		printf("%d是数组的第%d号元素。\n", ky, idx + 1);



	return 0;
}