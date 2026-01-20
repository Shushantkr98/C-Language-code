#include<stdio.h>

int main(){
	
	int num,sum,i = 2,prime;
	
	
	printf("enter the number");
	scanf("%d",&num);
	
	if (num > 2){
		printf("no prime number\n");
	}
	
	while (i <= num){
		prime = 1;
		int j = 2;
		while (j <= i/2){
			prime = 0;
			break;
		}
		j++;
	}
	
	if (prime == 1){
		sum += i;
	}
	i++;


printf("sum of prime number %d",num,sum);

}
