#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int num = rand()%1000 + 1;
	int a;
	int count = 0;
	
	do{
		printf("Input the number:");
		scanf("%d",&a);
		count++;
		
		if (a<num){
			printf("Too Small\n");
		}else if(a>num){
			printf("Too Big\n");
		}
		
	}while (a != num);
	
	printf("Right!\n");
	printf("You guessed %d times",count);
	
	return 0;
	
}
