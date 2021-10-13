//就是去尝试一下这个指针的
#include <stdio.h>
int main(void)
{
	int  sun_folwer  = 100;

	int* p = &sun_folwer;

	//printf("这个地址是%p\n", &sun_folwer);
	printf("这个地址是%p\n", p);//此处最好不要加入那个地址符


	printf("则这个的值是%d\n",* p);   //这个是真实值

	return 0;
}
//去区分那个*的作用的到底在哪里
