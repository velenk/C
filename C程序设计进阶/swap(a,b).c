#include <stdio.h>

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
	
}

int main()
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	swap(&a,&b);
	
	printf("%d %d\n",a,b);
	
	return 0;
}
