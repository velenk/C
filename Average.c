#include <stdio.h>

int main()
{
	int num[100];
	int cnt = 0;
	int sum = 0;
	int average;
	int x;
	
	scanf("%d",&x);
	while (x > 0){
		if (cnt>99){
			break;
		}
		num[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d",&x);
	}
	
	average = sum/cnt;
	
	printf("Average is %d\n",average);
	
	for (cnt-=1;cnt>=0;cnt--){
		if (num[cnt]>average){
		printf("%d ",num[cnt]);
		}
	}
	return 0;
}
