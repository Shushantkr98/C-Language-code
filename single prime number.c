#include<stdio.h>

int main(){
	
	int prime = 5;
	int flag = 1;
	
	int i = 2;
	
	while (i<prime){
		if(prime%i == 0){
			flag = 0;
			break;
		}
	i++;
	}
	
	if (flag == 1){
		printf("the given number %d is prime", prime);
	}
	else{
		printf("the number %d is not primr", prime);
	}
}
