#include<stdio.h>

int main(){
	
	int num,sum;
	int digit;
	
	printf("enter the number");
	scanf("%d",&num);
	
	while (num>0){
		
		digit = num % 10;
		
		sum += digit;
		
		num /= 10;
		
	}
printf("%d",sum);
}
