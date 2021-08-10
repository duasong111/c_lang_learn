//九九乘法表--标准版
#include <stdio.h>

int main(void)
{
    int i, j;
    printf(" |");
    for (i = 1; i < 10; i++) {  /*横行i的排布*/
        printf("%3d", i);     /*要求格式对仗*/
    }
    putchar('\n');
    for (i = 1; i < 30; i++) {      /*那个小横格要30个*/
        putchar('-');
    }
    putchar('\n');


    for (i = 1; i <= 9; i++) {
        printf("%d|", i);          /* 纵列的1---9的排布*/
        for (j = 1; j <= 9; j++)
            printf("%3d", i * j);
        putchar('\n');


    }
}