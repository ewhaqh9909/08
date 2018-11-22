#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*fp=NULL;
	int i;
	char input[100];
	fp=fopen("sample.txt","w");
	for(i=0;i<3;i++)
	{
		printf("ют╥б:");
		scanf("%s",input);
		fprintf(fp,"%s",input);
	}
	fclose(fp); 
	return 0;
}
