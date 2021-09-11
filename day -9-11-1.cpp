/*
显示对unsigned进行左移或者右移的结果
*/
#include <stdio.h>
int count_bits(unsigned x);
int int_bits(void);
void print_bits(unsigned x);
int main(void)
{
	unsigned x, n;

	printf("非负整数：");  scanf_s("%u", &x);
	printf("位移位数：");  scanf_s("%u", &n);

	printf("\n整数       =");   print_bits(x);
	printf("\n左移后的值  =");   print_bits(x << n);
	printf("\n右移后的值  =");   print_bits(x >> n);

	putchar('\n');

	return 0;
}
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1u) bits++;
		x >>= 1;
	}
	return bits;
}
int int_bits(void)
{
	return count_bits(~0u);
}
void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1;i >= 0; i--)
		putchar(((x >> i) & 1u) ? '1' : '0');
}
