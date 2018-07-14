#include <stdio.h>

void f(void){
	static int all = 1;
	all += 2;
	printf("%d in %s\n",all,__func__);
	
	return;
}

int main(int argc, char** argv){
	f();
	f();
	f();
	
	return 0;
}

