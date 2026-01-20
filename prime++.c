#include<stdio.h>

void main(){
	
  int num,digit;
  int sum;
  int prime = 2;
  while(prime <= 100){
    
  int flag = 1;
  int i = 2;
  while(i<prime){
    if(prime%i == 0){
      flag = 0;
      break;
    }
    i++;
     while (num>0){
		
		digit = num % 10;
		
		sum += digit;
		
		num /= 10;
}
  }
 		
}
 
  if(flag == 1){
    printf("%d \t",prime);
  }
  prime++;
}
