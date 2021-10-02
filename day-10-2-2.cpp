#include <stdio.h>

int main(void)
{
	int ch, i = 0;

	while ((ch = getchar()) != EOF) {
		putchar(ch);
		if (ch == '\n')	i++; // 这就是利用空行，若有空行，则
	}                        //就那个进行i++ 来便于计数
	printf("%d", i);

	return 0;
}