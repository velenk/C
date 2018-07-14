#include <stdio.h>

int main()
{
	int price,bill;
	
	printf("Input Price:");
	scanf("%d",&price);
	printf("Input Bill:");
	scanf("%d",&bill);
	
	if (price <= bill){
		printf("Return %d",bill - price);
	}else{
		printf("Lack %d",price - bill);
	}
	
	return 0;
	
}
