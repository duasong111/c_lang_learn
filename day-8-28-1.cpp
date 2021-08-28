//函数6-11，记忆回顾篇
#include <stdio.h>

#define NUMBER 5
int max_of(int v[5], int n)
{
	int i;
	int max = v[0];
	 
	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];

			return max;
}
int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e, max_m;

	printf("请输入%d名同学的成绩\n",NUMBER);

	for (i = 0; i < NUMBER; i++) {
		printf("[%d]  英语", i + 1);
		scanf_s("%d", &eng[i]);
		printf("  数学");
		scanf_s("%d", &mat[i]);
	}

//	max_e = max_of(eng, NUMBER);
//max_m = max_of(mat, NUMBER);

	printf("则输出的最大值为%d \n", max_of(eng,NUMBER));
	printf("则输出的最大值为%d \n", max_of(mat, NUMBER));
	//前方max_of的参数为两个，所以你也待弄俩变量，   


	return 0;
}