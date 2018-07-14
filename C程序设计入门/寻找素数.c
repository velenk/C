#include <stdio.h>

int main()
{
	int num,i,x;
	int isprime = 1;
	
	scanf("%d",&num);
	
	for (x = 2;x<=num;x++){
		
		isprime = 1;
		for (i=2;i<x;i++){
			if (x % i == 0){
				isprime = 0;
				break;
			}
		}
		
		if (isprime == 1){
			printf("%d ",x);
		}
	}
	return 0;
}
