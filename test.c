#include<stdio.h>

typedef struct {
	int rollno;
	char name[50];
}student;

void insert(){
	FILE *fp = fopen('test.bat','ab+');
	
	student s;
	printf("enter name ");
	scanf("%s",s.name);
	printf("enter rollno ");
	scanf("%d",&s.rollno);
	
	fwrite(s,sizeof(s),1,fp);
	fclose(fp;)
}

void show(){
		FILE *fp = fopen('test.bat','rb');
	
	student s;
	fread(s,sizeof(s),1,fp);
	printf("name : %s and rollno : %d",s.name,s.rollno);
	fclose(fp;)
}

void main(){
	int choice;
	printf("enter option ");
	scanf("%d",&choice);
	
	if(choice == 1){
		insert();
	}
	else if(choice == 2){
		show();
	}
	else if (choice == 3){
		exit(0);
	}
}
