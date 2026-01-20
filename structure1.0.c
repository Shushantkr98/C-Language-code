#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	struct {
		
		char name[15];
		char class[10];
		int rollno;
		char address[15];
		int contactno;
	}typedef student;
	
	student s[10];
	
	int i;
	
	for(i=0;i<10;i++){
	
	printf("student no %d\n",i+1);
	
	printf("enter the name\n");
	scanf("%s\n",s[i].name);
	fflush(stdin);
	
	printf("enter the class\n");
	scanf("%s\n",s[i].class);
	fflush(stdin);
	
	printf("enter the rollno\n");
	scanf("%d\n",&s[i].rollno);
	
	printf("enter the address\n");
	scanf("%s\n",s[i].address);
	fflush(stdin);
	
	printf("enter the contactno\n");
	scanf("%d\n",&s[i].contactno);
	}
	
	for(i=0;i<10;i++){
		
	printf("student no %d\n",i+1);
	
	printf("%s\n",s[i].name);
	printf("%s\n",s[i].class);
	printf("%d\n",s[i].rollno);
	printf("%s\n",s[i].address);
	printf("%d\n",s[i].contactno);
	}
}
