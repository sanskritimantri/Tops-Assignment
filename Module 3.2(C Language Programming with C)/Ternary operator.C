#include<stdio.h>
main()
{
	int num;
	printf("Enter the number : ");
	scanf("%i",&num);
    (num%2==0) ? printf("It is even number.") : printf("It is odd number.");
}
