#include<stdio.h>

int square (int n){
	
	return n * n;
}

int main(){

int num;

printf("enter the num ");
scanf("%d",&num);

printf("enter the sqaure %d is %d",num,square(num));

}
