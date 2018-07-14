#include <stdio.h>

int main()
{
	int num,digit;
	int ret = 0;
	
	scanf("%d",&num);
	
	while (num > 0){
		digit = num % 10;
		ret = ret*10 + digit;
		num = num/10;
		
	}
	printf("%d",ret);
	
	return 0;
	
}
