#include <stdio.h>

int main()
{
	const int num = 1000;
	int p[num];
	int i,x;
	
	for (i=0;i<num;i++)
	{
		p[i] = 1;
	}
	
	for (i=2;i<num;i++)
	{
		if (p[i])
		{
			for (x=2;x*i<=num;x++)
			{
				p[x*i] = 0;
			}
		}
	}
	
	for (i=2;i<num;i++)
	{
		if (p[i])
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
