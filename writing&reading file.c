#include<stdio.h>

int main(){
	
	FILE *fp = fopen("sample.txt","w");
	if (fp == NULL){
		
		printf("error opening file!\n");
		return1;
	}
	fprintf(fp, "c file handling example.\n");
	fclose(fp);
	
	fp = fopen("sample.txt","r");
	char line[100];
	if (fp != NULL){
		while(fgets(line, sizeof(line), fp)){
			printf("%s", line);
		}
		fclose(fp);
	}
	return 0;
}
