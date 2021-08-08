/*
对于双循环的案例
*/
#include <stdio.h>
int main(void)
{
	int num1, num2;
	

	for (num1 = 1; num1 <= 9; num1++) {
		for (num2 = 1; num2 <= 9; num2++)
			printf("%2d ", num1 * num2);  /*%2d为*/
		putchar('\n');
	}

	return 0;
}