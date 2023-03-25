#include<stdio.h>
main()
{
	int a,b,sum,sub,div,mod,mul;
	printf("Enter the number a : ");
	scanf("%i",&a);
	printf("Enter the number b : ");
	scanf("%i",&b);
	sum=a+b;
	sub=a-b;
	div=a/b;
	mod=a%b;
	mul=a*b;
	printf("The addition,subtraction,division,modular and multiplication of a and b is %i,%i,%i,%i,%i:",sum,sub,div,mod,mul);
}
