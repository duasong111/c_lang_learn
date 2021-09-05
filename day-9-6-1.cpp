/*
求四名同学在三次考试中的成绩
*/
#include <stdio.h>
void mat_add(const int a[4][3], const int b[4][3], int c[4][3]);
void mat_print(const int m[4][3]);
int main(void)
{
	int sore1[4][3] = { {23, 13,23}, {23, 67, 89}, {34, 56, 67}, {89,98, 32} };
	int sore2[4][3] = { {93, 43,33}, {23, 63, 82}, {34, 66, 87}, {69,93, 39} };
	int sum[4][3];

	mat_add(sore1, sore2, sum);
	
	printf("第一次考试的分数\n");  mat_print(sore1);
	printf("第二次考试的分数\n");  mat_print(sore2);
	puts("总分");    mat_print(sum);

	return 0;
}
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j]; // 那个也是这个样子吗？
	
}
void mat_print(const int m[4][3])
{

	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}
