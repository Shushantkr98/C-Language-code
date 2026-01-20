#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
//  structure
struct {
  char name[100];
  int rollno;
  long int contactno;
  char class[10];
  int age;
  char address[30];
}typedef student;


 student s[10];

	int i;
	
	for(i=0;i<10;i++){
	printf("student no %d \n",i+1);
	
	printf("enter the name \n");
	scanf("%s",s[i].name);
	
	fflush(stdin);
	printf("enter the rollno\n");
	scanf("%d",&s[i].rollno);
	
	printf("enter the contactno \n");
	scanf("%ld",&s[i].contactno);
	
	printf("enter the class \n");
	scanf("%s",s[i].class);
	fflush(stdin);
	printf("enter the age \n");
	scanf("%d",&s[i].age);
	
	printf("enter the address \n");
	scanf("%d",s[i].address);
	fflush(stdin);
	
	
}

	for(i=0;i<10;i++){
		printf("student no %d\n",i+1);
printf("\n %s",s[i].name);
printf("\n %d",s[i].rollno);
printf("\n %ld",s[i].contactno);
printf("\n %s",s[i].class);
printf("\n %d",s[i].age);
printf("\n %s",s[i].address);
}
}
