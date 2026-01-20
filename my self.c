#include<stdio.h>

int main(){
	
	char name[10] = "shushant";
	char father_name[20] = "shiv ";
	char mother_name[20] = "bal ";
	char school_name[16] = "sbbs";
	
	printf("what is your name\n");
	scanf("%s", &name);
	
	
	printf("what is your father name\n");
	scanf("%s", &father_name);
	
	
	printf("what is your mother name\n");
	scanf("%s", &mother_name);
	
	
	printf("what is your school name\n");
	scanf("%s", &school_name);
	
	printf("Ans---> my name is %s\n",name);
	printf("Ans--->my father name is %s\n",father_name);
	printf("Ans--->my mother name is %s\n",mother_name);
	printf("Ans--->my school name is %s\n",school_name);
	
}
