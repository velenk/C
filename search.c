#include <stdio.h>

int search(int key,int a[], int len)
{
	int ret = -1;
	int i;
	
	for (i=0;i<len;i++)
	{
		if (a[i] == key)
		{
			ret = i;
			break;
		}
	}
	
	return ret;
}

int main()
{
	int r,num;
	int s[] = {5,6,8,2,1,4,0,9,7,3};
	
	scanf("%d",&num);
	
	r = search(num,s,sizeof(s)/sizeof(s[0]));
	
	if (r!=-1)
	{
		printf("%d\n",r);
	}
	
	return 0;
}
