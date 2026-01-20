#include<stdio.h>

int main(){
	
	int num,sum;
	int digit,result=0;
	
	printf("enter the number");
	scanf("%d",&num);
	
	int temp = num;
	while (num>0){
		
		digit = num % 10;
			
	if (num == temp){
		result = digit;
	}
		
		num /= 10;
		
	}
	
printf("%d",digit+result);
}



