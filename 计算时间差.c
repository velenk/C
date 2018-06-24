#include <stdio.h>

int main()
{
	int hour1,minute1,hour2,minute2;
	
	printf("Input two groups of hour and minute:");
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t = t1 - t2;
	
	printf("%dh%dmin\n",t/60,t%60);
	
	return 0;
}
