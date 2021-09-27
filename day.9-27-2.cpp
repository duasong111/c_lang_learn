#include <stdio.h>
enum animal{dog, cat, monkey,invalid };
void dog(void)
{
	puts("汪汪！！");
}
void cat(void)
{
	puts("喵喵！！");
}
void monkey(void)
{
	puts("啊哈！！");
}
enum animal select(void)
{
	int tmp;

	do {
		printf("0....dog 1...cat   2...monkey 3...无效");
		scanf_s("%d", &tmp);
	} while (tmp < dog || tmp > invalid);

	return tmp;
}
int main(void)
{
	enum animal seltected;

	do {
		switch (seltected = select()) {
		case dog: dog();  break;
		case cat: cat();  break;
		case monkey: dog();  break;
		}
	} while (seltected != invalid);

	return 0;
}
//不兼容的问题出现在哪？？？？