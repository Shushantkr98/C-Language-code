#include <stdio.h>

int main() {
    int length, breadth, radius, area, perimeter, circumference;
    float pi = 3.14;

    printf("Enter the length ");
    scanf("%d", &length);

    printf("Enter the breadth ");
    scanf("%d", &breadth);

    printf("Enter the radius ");
    scanf("%d", &radius);

	//Recentangle area
	area = length*breadth;
	printf("\n");
	printf("Area of recentangle %d\n",area);
	
	//Recentangle perimeter
	perimeter = 2*(length*breadth);
	printf("\n");
	printf("Area of perimeter %d\n",perimeter);
	
	
	//Area of circle
	area = pi*radius*radius;
	printf("Area of circle %d\n",area);

	//AREA of circumference
	circumference = 2*pi*radius;
	printf("Area of circumference %d\n",&circumference);
	
}
	 
	
	
	
	   
	
	

	
