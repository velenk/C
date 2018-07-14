#include <stdio.h>

void maxmin(int a[], int len, int *max, int *min);

int main()
{
	int max,min;
	int a[] = {1, 34, 5, 43, 47, 7, 8, 16,};
	
	maxmin(a, sizeof(a)/sizeof(a[0]), &max, &min);
	
	printf("max=%d min=%d",max,min);
	
	return 0;
}

void maxmin(int a[], int len, int *max, int *min)
{
	int i;
	*max = *min = a[0];
	
	for (i=1;i<len;i++)
	{
		if(*max<a[i])
		{
			*max = a[i];
		}
		if(*min>a[i])
		{
			*min = a[i];
		}
	}
}

