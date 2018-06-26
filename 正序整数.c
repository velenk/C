#include <stdio.h>

int main()
{
	int x;
	int mask = 1;
	
	scanf("%d",&x);
	
	int y = x/10;
	while (y>0){
		y/=10;
		mask *= 10;
	}
	
	int d;
	do{
		d = x / mask;
		printf("%d",d);
		x = x%mask;
		mask /= 10;
		if (mask>0){
			printf(" ");
		}
	}while(mask>0);
	
	printf("\n");
	
	return 0;
}
