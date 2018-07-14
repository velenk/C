#include <stdio.h>

int main(){
	int num;
	int i1,i2;
	i1 = printf("%d\n%d",12345, num);
	printf("%d\n",num);
	i2 = scanf("%*d%d",&num);
	printf("%d\n",num);
	printf("%d\t%d\n",i1, i2);
	
	return 0;
}
