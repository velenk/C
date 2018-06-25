#include <stdio.h>

int main()
{
	int sum = 0;
	int count = 0;
	int x;
	
	scanf("%d",&x);
	while (x > 0){
		sum += x;
		count++;
		scanf("%d",&x);
	}
	
	printf("Average is %d",sum/count);
	
	return 0;
}
