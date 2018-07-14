#include <stdio.h>

int main(int argc, const char* argv[])
{
	struct data{
		int year;
		int month;
		int day;
	}d1,d2;
	
	struct data today = {2018, .month = 07};
	d1.day = 03;
	
	d2 = today;
	
	struct data *pdata = &today;
	
	printf("Today is %i-%i-%i.\n",
	today.year, today.month, today.day);
	
	printf("%p\n",pdata);
	
	return 0;
}

