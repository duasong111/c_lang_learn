/*
    对数组的全部元素进行倒序排列
*/

#include <stdio.h>
#define number 3

void intary_rcpy(int v1[], const int v2[], int n)
{
    
    int i;
    for (i = 0; i < n; i++) {
        v1[i] = v2[n - i - 1];   // v2进行倒序，并在v1当中
    }
    /*
    利用那个 int i;
     for (i=0;i<n / 2 - 1;i++){
           int temp = v[i];
           v[i] = v[n - 1 - i];
           v[n - 1- i] = temp;
           } //这个都是那个v函数，注意开始的变量名字！！

    
    
    
    */

}

int main() {
    int i;
    int x[number];
    int y[number];  //比那个更加简便一点
    for (i = 0; i < number; i++) {    /* 输入元素的值 */
        printf("x[%d] : ", i);
        scanf_s("%d", &x[i]);
    }

    intary_rcpy(y, x, number);   //上边的变量个数是三


    puts("倒序排列了。");
    for (i = 0; i < number; i++)        /* 显示元素的值 */
        printf("y[%d] = %d\n", i, y[i]);

    return 0;

}