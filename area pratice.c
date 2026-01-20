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

    // Rectangle area
    area = length * breadth;
    printf("Area of rectangle: %d\n", area);

    // Rectangle perimeter
    perimeter = 2 * (length + breadth);
    printf("Perimeter of rectangle: %d\n", perimeter);

    // Circle area
    area = pi * radius * radius;
    printf("Area of circle: %d\n", area); // area ?? float ????? ????? ????

    // Circle circumference
    circumference = 2 * pi * radius;
    printf("Circumference of circle: %d\n", circumference);

    return 0;
}
