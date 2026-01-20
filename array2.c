#include<stdio.h>

int main(){
	
	char x[][10] = {"shushant","vishal","vipin","rahul"};
	
	int size = sizeof (x)/sizeof (x[0]);
	
	int i;
	for(i=0;i<size;i++){
	
	printf("%s\n",x[i]);
	}
}
