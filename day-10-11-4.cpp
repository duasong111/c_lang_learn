#include<stdio.h>


void swap(int* px, int* py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}
//同样乾坤大挪移


void  sort3(int* n1, int* n2, int* n3) {
    if (*n1 > * n2) {
        swap(n1, n2);
    }
    if (*n1 > * n3) {
        swap(n1, n3);
    }
    if (*n2 > * n3) {
        swap(n2, n3);
    }
}
  //这是什么原理呢？？？         
  //就是为了比较后进行排列的，让其为之进行颠倒



int main(void) {
    int n1, n2, n3;
    printf("n1=");
    scanf_s("%d", &n1);
    printf("n2=");
    scanf_s("%d", &n2);
    printf("n3=");
    scanf_s("%d", &n3);
    putchar('\n');
    sort3(&n1, &n2, &n3);
    printf("%d,%d,%d", n1, n2, n3);
} //大师，我悟了