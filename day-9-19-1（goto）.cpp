#include <stdio.h>
int main()
{
	puts("请输入几个小数，若想终止操作，输入负数");
	float x;
	float sum = 0;
	scanf_s("%f", &x);  //输入第一个数 
loop:
	if (x > 0) {
		sum += x;
		scanf_s("%f", &x);
		goto loop;
	}
	printf("sum=%6.2f", sum);
	return 0;
}
//对于goto语句，还有一个名字就是无条件转移语句，但是他的终结语句就是0或者是负数，则程序就运行结束了。