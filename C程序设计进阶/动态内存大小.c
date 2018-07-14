#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = 0;
	int cnt = 0;
	
	while (p = malloc(1024*1024*102)){
		cnt++;
	}
	
	printf("%dGB\n",cnt / 10);
	
	free(p);
	return 0;
}
