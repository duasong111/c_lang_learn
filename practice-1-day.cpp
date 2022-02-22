//我现在还是停留在那个探索的阶段，所以切勿急躁
#include <stdio.h>
int main(void)
{
  int i, j, len;
  puts("生成直角边在右下角的等腰直角三角形。");
  printf("短边");
  scanf_s("%d"，&len)；
    for(i=1;i<=len;i++) {
      for(j=1;j <=len - i;j++)
        putchar(' '); //目的是为了让其那个得到的是空格
      for(j = 1;j <-i;j++)
        putchar('*');
      putchar('\n');
    
    }
    
return 0;
}
