#include <stdio.h>

int main()
{
	int x;
	int n = 0;
	
	printf("Input number:");
	scanf("%d",&x);
	
	while (x > 0){
		n++;
		x /= 10;
	}
	
	printf("%d",n);
	
	return 0;
}
