#include <stdio.h>

enum color{
	red,
	yellow = 1,
	blue
};

void f(enum color c)
{
	printf("%d\n",c);
}

int main()
{
	enum color t = red;
	//scanf("%d",&t);
	
	f(t);
	
	return 0;
}
