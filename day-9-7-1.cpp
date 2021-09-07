//代码说话，要试着进行变量名的命名
#include <stdio.h>

int x = 75;

void input_x(void);
int main(void)
{
	int i;
	int x = 99;

	input_x();  //调用函数
	printf("x = %d\n", x);
	for (i = 0; i < 5; i++) {
		int x = i * 100;
		printf("x = %d\n", x);
		
	}
	printf("x = %d\n", x);
	return 0;
}
void input_x(void) {
	printf("x = %d\n",x);
}