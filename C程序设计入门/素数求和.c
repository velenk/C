#include <stdio.h>

int isprime(int num)
{
	int x,i;
	int ret = 1;
	
	x = num/2;
	
	for (i=2;i<x;i++){
		if (num % i == 0){
			ret = 0;
			break;
		}
	}
	return ret;
}

int main()
{
	int sum = 0;
	int count = 0;
	int m,n,i;
	
	scanf("%d %d",&m,&n);
	
	for (i=m;i<n;i++){
		if (isprime(i)){
			sum += i;
			count++;
		}
	}
	printf("%d %d\n",count,sum);
}
