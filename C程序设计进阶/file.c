#include <stdio.h>

int main(int argc, char** argv[]){
	FILE *fp = fopen("123.txt","r");
	if (fp){
		int num;
		fscanf(fp, "%d", &num);
		printf("%d\n",num);
		fclose(fp);
	} else{
		printf("Error\n");
	}
	return 0 ;
}
