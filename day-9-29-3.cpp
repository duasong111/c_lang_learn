#include <stdio.h>
int main(void)
{
	int ch;
	/*while ((ch = getchar()) != EOF)
		putchar(ch); */

	while (1) {
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}

//c语言之copy之术
// 进行那个c语言的复制美