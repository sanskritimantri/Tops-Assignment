#include<stdio.h>
main()
{
	int num,sum=0,firstdigit=0,lastdigit=0;
	printf("Enter any number : ");
	scanf("%d",&num);
	lastdigit = num%10;
	while(num>=10)
	{
		num=num/10;
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	printf("Sum of first and last digit is %d",sum);
	return 0;
}
