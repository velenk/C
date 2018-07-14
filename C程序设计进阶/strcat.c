#include <stdio.h>
#include <string.h>

char* mycat(char* s1, char* s2)
{
	int idx = 0;
	int s1len;
	s1len = strlen(s1);
	
	while (*(s2 + idx) != '\0'){
		s1[s1len + idx] = s2[idx];
		idx++;
	}
	
	return s1;
}

int main()
{
	char s1[] = "abc";
	char* s2 = "def";
	
	mycat(s1, s2);
	
	printf("%s\n",s1);
	
	return 0;
}
