//可以控制上下线的自增程序
/*
就是玩
*/
#include <stdio.h>
int main(void)
{
    int i, num;

    printf("请输入第一个整数A：");
    scanf_s("%d", &i);    /*这样我可以控制底线数字是多少，避免一次次的输入*/

    printf("请输入第二个整数B：");
    scanf_s("%d", &num);

    while (i <= num)
        printf("%d ", i++);

    printf("\n");

    return 0;
}