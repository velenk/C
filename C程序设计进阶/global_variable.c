#include <stdio.h>

int gall;

void f(void){
	int gall = 10;
	printf("%d in %s\n",gall,__func__);
	gall += 2;
	printf("%d in %s\n",gall,__func__);
	
	return;
}

int main(int argc, char** argv){
	printf("%d in %s\n",gall,__func__);
	f();
	printf("%d in %s\n",gall,__func__);
	
	return 0;
}

