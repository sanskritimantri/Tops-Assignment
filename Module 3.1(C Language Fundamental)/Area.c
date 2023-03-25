#include<stdio.h>
main()
{
	float r,l,b,base,height,pi;
	pi=3.14;
	printf("Enter the radius of the circle : ");
	scanf("%f",&r);
	printf("Area of circle = %f",pi*r*r);
	printf("\nEnter the length of the rectangle : ");
	scanf("%f",&l);
	printf("\nEnter the breadth of the rectangle : ");
	scanf("%f",&b);
	printf("Area of rectangle = %f",l*b);
	printf("\nEnter the base of the triangle : ");
	scanf("%f",&base);
	printf("\nEnter the height of the triangle : ");
	scanf("%f",&height);
	printf("Area of triangle = %f",base*height*1/2);
}
