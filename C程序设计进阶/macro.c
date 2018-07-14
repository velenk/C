#include <stdio.h>

#define PI 3.14159
#define PRT printf("%f\n",PI*2);\
printf("%f\n",PI) // pi * 2

#define cube(x) ((x)*(x)*(x))

/*
define R(x) (x)*5
100/R(2)
define R(x) (x*5)
R(2+2)
*/

int main(){
	int i = 0;
	
	PRT;
	
	printf("%s,%d\n",__FILE__,__LINE__);
	printf("%s,%s\n",__DATE__,__TIME__);
	
	printf("%d\n",cube(i+5));
	
	return 0;
}
