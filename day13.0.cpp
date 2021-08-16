//(double)类型
#include <stdio.h>
int main(void)
{
	int i;
	double x[7];

	for (i = 0; i < 7; i++) {
		x[i] = 0.0;  
	}

	for (i = 0; i < 7; i++) {
		printf("x[%d] = %.1f\n", i, x[i]); /*i在递加，但是【i】不为所动*/
	}

	return 0;
}