//输出2的乘方直到我所输入的数字限制他。
#include <stdio.h>
int main(void)
{  
    int num1;
    int num2;

    printf("请输入一个整数：");
    scanf_s("%d", &num1);

    while (num1 <= num2){

        printf("%d",num1);
        num1 = num1 * 2;    /* 这个也可以表示为num1 *= 2; */
    }
  printf("\n");       /* 若不是那个则换行*/


    return 0;
}