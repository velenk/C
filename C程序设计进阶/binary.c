#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	unsigned int mask = 1<<31;
	for (;mask;mask>>=1){
		if (num & mask){
			break;
		}
	}
	for (;mask;mask>>=1){
		printf("%d",num & mask?1:0);
	}
	
	return 0;
}
