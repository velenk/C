#include <stdio.h>

int mylen(const char *s)
{
	int cnt = 0;
	while (s[cnt] != '\0'){
		cnt++;
	}
	return cnt;
}

int main()
{
	char s[] = "hello";
	printf("%d\n",mylen(s));
	printf("%d\n",sizeof(s));
	
	return 0;
}
