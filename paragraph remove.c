#include<stdio.h>
#include<string.h>

void remove(char paragraph[], char word[]){
	char result[100];
	int i = 0, j= 0;
	char *temp;
	
	token = strtok(paragraph, " ");
	while (token != NULL){
		
		if (strcmp(token, word) != 0){
			
			if (i > 0)
			strcat(result, " ");
			else
			result[0] = '\0';
			strcat(result, token);
			i++;
		}
		token = strtok(NULL, " ");
	}
	printf("\n update paragraph %s\n", result);
}

int main (){
	
	char paragraph[100], word[200];
	
	printf("Enter a paragraph: \n");
	gets(paragraph);
	
	printf("Enter the word in remove: \n");
	scanf("%s",word);
	
	remove(paragraph, word);
	
	return 0;
	
}
	
}
