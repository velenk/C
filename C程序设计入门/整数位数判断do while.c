#include <stdio.h>

int main()
{
	int x;
	int n = 0;
	
	printf("Input number:");
	scanf("%d",&x);
	
	if (x < 0){
		x = -x;
	}
	
	do{
		n++;
		x /= 10;
	}while (x > 0);
	
	printf("%d",n);
	
	return 0;
}
