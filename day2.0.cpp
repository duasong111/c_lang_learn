//将数字自减或者自加的两种表述方法
#include <stdio.h>
int main(void)
{ 
    int num;

    printf("请输入一个正整数：");
    scanf_s("%d", &num);

    while (num >= o)
      printf("%d",num--);

      printf("\n")

    return 0;
}
// 在 while （num >= 0）后加{printf("%d",num);      num--}   就是那么大的差距，如果想换成自加 则用++