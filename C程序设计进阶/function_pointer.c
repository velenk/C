#include <stdio.h>

void f(void){
	printf("in f()\n");
}

void g(void){
	printf("in g()\n");
}

int plus(int a, int b){
	return a+b;
}

int minus(int a, int b){
	return a-b;
}

void cal(int (*f)(int, int)){
	printf("%d\t",(*f)(2, 3));
}

int main(){
	void (*fa[])() = {f, g};
	
	int i = 1;
	if (i>=0 && i<sizeof(fa)/sizeof(fa[0])){
		(*fa[i])();
	}
	
	cal(plus);
	cal(minus);
	
	return 0;
}
