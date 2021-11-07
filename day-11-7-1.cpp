#include <stdio.h>
#define NAME_LEN 64
struct student {
	char name[NAME_LEN];
	int  height;
	long weight;
	float schols;
};
int main(void)
{
	struct  student takao = { "takao", 173 , 180,56789 };

	printf("姓名=%s\n", takao.name);
	printf("身高=%d\n", takao.height);
	printf("体重=%ld\n", takao.weight);
	printf("奖学金=%.lf\n", takao.schols);
}
//在此，student 是结构名称
//同时那个 takao是对象名
//takao.name 在这个过程当中， 则等同于对象名.成员名