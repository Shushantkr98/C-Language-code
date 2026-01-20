#include<stdio.h>
#include<string.h>

int main(){
	
	char name[10];
	char newname[10];
	int i,j;
	
	printf("enter the name");
	scanf("%s",name);
	
	j = strlen(name);
	int k=0;
	for (i = 0;i<j;i++){
		
		if('a' != name[i] && 'e' != name[i] && 'i' != name[i] && 'o' != name[i] && 'u' != name[i] && 'A' != name[i] && 'E' != name[i] && 'I' != name[i] && 'O' != name[i] && 'U' != name[i]){
			newname[k] = name[i];
			k++;
		}	
	}
	
	printf("enter the name %s",newname);
}
