#include <stdio.h>

int main()
{
	int num,i,x;
	int isprime = 1;
	
	scanf("%d",&num);
	x = num/2;
	
	for (i=2;i<x;i++){
		if (num % i == 0){
			isprime = 0;
			break;
		}
	}
	
	if (isprime == 1){
		printf("%d is prime",num);
	}else{
		printf("%d is not prime",num);
	}
	
	return 0;
}
