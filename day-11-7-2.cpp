#include <stdio.h>
#define NAME_LEN 64

struct student {
	char name[NAME_LEN];
	int height;
	long schols;
	float weight;
};

void hiroko(struct student* std)
{
	if ((*std).height < 180) (*std).height = 180;
	if ((*std).weight > 90)  (*std).weight = 90;
}


int main(void)
{
	struct student tado = { "Tado",173,7800,62.5 };

	hiroko(&tado);

	printf("姓名=%s\n", tado.name);
	printf("身高=%d\n", tado.height);
	printf("奖学金=%ld\n", tado.schols);
	printf("体重=%.1f\n", tado.weight);

	return 0;
}