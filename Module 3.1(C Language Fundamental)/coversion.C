#include<stdio.h>
main()
{
	float years,days;
	printf("Enter the number of years: ");
	scanf("%f",&years);
	printf("The number of days  is : %f",years*365);
	printf("\nEnter the number of days: ");
	scanf("%f",&days);
	printf("The number of years is: %f",days/365);
}
