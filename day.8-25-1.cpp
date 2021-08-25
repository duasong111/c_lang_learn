#include <stdio.h>
int scan_pint(void)
{
	int tmp;
	do {
		printf("请输入一个正整数");
		scanf_s("%d", &tmp);
		if (tmp <= 0)
			printf("请不要输入非正整数 \n");
	} while (tmp <= 0); //第一层，保证输入的是正整数。

	
	return tmp;  //并非int——main 所以要输出返回值
}
int rev_int(int num)
{
	int tmp = 0;
	if(num > 0)
		do {
			tmp = tmp * 10 + num % 10;
			num /= 10;
		} while (num > 0);

		return tmp;
}
        
int main(void)			
{
	int nx = scan_pint();

	printf("则该整数的倒转后的值是%d。\n", rev_int(nx));
	                                     //难道开始循环函数2
	return 0;
}