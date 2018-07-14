#include <stdio.h>
#include <string.h>

char* mycpy(char* dst, const char* src)
{
	int cnt = 0;
	
	while (src[cnt] != '\0'){
		dst[cnt] = src[cnt];
		cnt++;
	}
	dst[cnt] = '\0';
	
	return dst;
}

int main()
{
	char* src = "abc";
	char* dst = (char*)malloc(strlen(src)+1);
	
	printf("%s",mycpy(dst, src));
	
	return 0;
}
