#include<stdio.h>

int main(){
	
	int ch;
	
	printf("enter the no");
	scanf("%d",&ch);
	
	switch(ch){
		case 1: printf("\n red"); break;
		case 2: printf("\n green"); break;
		case 3: printf("\n blue"); break;
		case 4: printf("\n white"); break;
		case 5: printf("\n yellow"); break;
		case 6: printf("\n orange"); break;
		case 7: printf("\n grey"); break;
		case 8: printf("\n purple"); break;
		case 9: printf("\n black"); break;
		case 10: printf("\n pink"); break;
		default: printf("khatam");
	}
}
