#include <stdio.h>

void printbin(int num);

struct U0{
	unsigned int leading : 3;
	unsigned int flag1 : 1;
	unsigned int flag2 : 1;
	int trailing : 27;
};

int main(){
	struct U0 uu;
	uu.flag1 = 0;
	uu.flag2 = 1;
	uu.leading = 2;
	uu.trailing = 12345;
	printf("%lu\n",sizeof(uu));
	printbin(*(int*)&uu);
	
	return 0;
}

void printbin(int num){
	unsigned int mask = 1<<31;
	for (;mask;mask>>=1){
		if (num & mask){
			break;
		}
	}
	for (;mask;mask>>=1){
		printf("%d",num & mask?1:0);
	}
}
