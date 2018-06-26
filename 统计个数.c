#include <stdio.h>

int main()
{
	const int number = 10;
	int x,i;
	int num[number];
	
	for (i=0;i<10;i++){
		num[i] = 0;
	}
	
	scanf("%d",&x);
	
	while (x>=0 && x<=number){
		num[x] += 1;
		scanf("%d",&x);
	}
	
	for (i=0;i<10;i++){
		printf("%d\n",num[i]);
	}
	
	return 0;
}
