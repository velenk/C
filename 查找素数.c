#include <stdio.h>

int isprime(int x,int a[],int count);

int main(void)
{
	const int num = 100;
	int p[num];
	int count = 1;
	int x = 3;
	int i;
	
	p[0] = 2;
	for (i=1;i<num;i++){
		p[i] = 0;
	}
	
	while(count<num){
		if (isprime(x,p,count)){
			p[count] = x;
			count++;
		}
		x++;
		
	}
	for (count=0;count<num;count++){
		printf("%d ",p[count]);
	}
	
	return 0;
}

int isprime(int x,int a[],int count)
{
	int i;
	int ret = 1;
	
	for (i=0;i<count;i++){
		if (x % a[i] == 0){
			ret = 0;
			break;
		}
	}
	
	return ret;
}

