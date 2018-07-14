#include <stdio.h>

int maxid(int a[], int len)
{
	int i;
	int ret = 0;
	
	for (i=1;i<len;i++)
	{
		if (a[i]>a[ret])
		{
			ret = i;
		}
	}
	
	return ret;
}

int main()
{
	int num[] = {9,65,32,18,5,2,5,14,254,51,3,8};
	int len = sizeof(num)/sizeof(num[0]);
	int y,x,i;
	
	for (i=len;i>1;i--)
	{
		x = maxid(num,i);
		y =  num[i-1];
		num[i-1] = num[x];
		num[x] = y;
	}
	
	for (i=0;i<len;i++)
	{
		printf("%d\t",num[i]);
	}
	
	return 0;
}
