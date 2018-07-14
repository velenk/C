#include <stdio.h>

int main()
{
	int foot = 0;
	double inch = 0;
	
	printf("Input foot & inch:");
	scanf("%d %lf",&foot,&inch);
	
	printf("%f meter\n",(foot + inch / 12.0)* 0.3048);
	
	return 0;
}
