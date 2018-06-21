#include <stdio.h>

int main()
{
	int price;
	printf("Input Number:");
	scanf("%d",&price);
	
	int change = 100 - price;
	printf("change %d\n",change);
	
	return 0;
}
