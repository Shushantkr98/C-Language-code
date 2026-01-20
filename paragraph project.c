#include<stdio.h>
#include<string.h>

int main(){
	
	char paragraph[100][50];
	char word[10] = {"shushant"}
	char newparagraph[20][50];
	int i,j;
	
	j = strlen(paragraph);

	printf("enter the paragraph");
	scanf("%s",paragraph);
	

	int k = 0;
	
	for (i = 0; i<j;i++){
		
		if (word != paragraph[i]){
			newparagraph[k] = word[i];
			k++;
		}
		
		
	}	
	
	printf("enter the paragraph %s",newparagraph);
	
}
