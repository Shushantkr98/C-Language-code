#include<stdio.h>

int main(){
	
	FILE *fp = fopen("input.txt","r");
	char buffer[100];
	if (fp != NULL	){
		while (fgets(buffer, sizeof(buffer),fp) != NULL){
			printf("%s", buffer);
		}
		fclose(fp);
	}
}
