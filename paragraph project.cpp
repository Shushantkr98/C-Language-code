#include<stdio.h>
#include<string.h>

int main(){
	
	char paragraph[100][50];
	char word[10];
	char new paragraph[80][40];
	int i,j;
	
	j = strlen(paragraph);

	printf("enter the paragraph");
	scanf("%s",paragraph);
	
	printf("enter the word");
	scanf("%s",word);

	int k = 0;
	
	for (i = 0; i<j;i++){
		
		if (word != paragraph[i]){
			new paragraph[k] = word[i];
			k++;
		}
		
		
	}	
	
	printf("enter the paragraph %s",newparagraph);
	
}
