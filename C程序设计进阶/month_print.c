#include <stdio.h>

int main()
{
	char* month[] = {
		"Jan",
		"Feb",
		"Mar",
		"Apr",
		"May",
		"Jun",
		"Jul",
		"Aug",
		"Sep",
		"Oct",
		"Nov",
		"Dec"
	};
	
	int num;
	
	scanf("%d",&num);
	
	printf("%s",month[num]);
	
	return 0;
}
