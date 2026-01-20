#include<stdio.h>

int main(){
	
	FILE *fp = fopen("output.txt", "w");
	if (fp != NULL) {
		
		fprintf(fp,"Hello, File! (Fprintf)\n");
		
		fputs("this is a line written with fputs.\n",fp);
		
		int numbers[] = {1,2,3,4,5};
		fwrite(numbers,sizeof(int),5,fp);
		
		fclose(fp);
	
		
	}
	return 0;
}
