#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s[] = "hello";
	char* p = strchr(s,'l');
	printf("%s\n",p);
	p = strchr(p+1,'l');
	char c = *p;
	*p = '\0';
	printf("%s\n",s);
	*p = c;
	
	return 0;
}
