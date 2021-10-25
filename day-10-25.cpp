#include <stdio.h>
int  set_idx(int* v, int n);
int main(void)
{
	int i;
	int a[] = { 1,2,3,4,5};

	set_idx(a,5);
	for (i = 0; i < 5; i++)
		printf("a[%d]=%d \n", i + 1, a[i]);

	return 0;
}
int  set_idx(int* v, int n)
{
	int i;
	for (i = 0; i < n; i++)
		return *v;
}
//之所以会出现那个，因为你void，然后在main函数已经赋值了，
//无论你的数值怎样变化，返回值就是val，但是int却不同，我返回的是指针值