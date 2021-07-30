#include <stdio.h>
int main(void)
{
	int hand;

	do {
		printf("你要出什么拳？（拳头...1/剪刀...2/布...3)");
		scanf_s("%d", &hand);
	}while (! (hand >= 1 && hand <= 3));  /* 范围在此将会retry */

	printf("你选择了");

	switch (hand) {
	case 1: printf("石头。\n");   break;
	case 2: printf("剪刀。\n");   break;
	case 3: printf("麻布。\n");   break;
	}

	return 0;
}