#include<stdio.h>
main()
{
	int year;
	printf("Enter any year: ");
	scanf("%i",&year);
	if(year%4==0)
	{
		printf("%d is the Leap year.",year);
	}
	else
	{
		printf("%d is not the Leap year.",year);
	}
}
