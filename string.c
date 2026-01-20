// write a program of reverse the letter with the help of string


#include<string.h>
#include<stdio.h>

int main(){
	
	char name[15];
	
	printf("enter your name \n");
	scanf("%s",name);
	
	printf("\n before the reverse : %s\n",name);
	
	int i,n;
	n = strlen(name);
	char temp[n-1];
	
	for(i= 0;i<n;i++){
		temp[i] = name[n-1-i];
	}
		printf("\n after the reverse : %s\n",temp);
}
