#include<stdio.h>
main()
{
	int num,remainder=0,max=0;
	printf("Enter any number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		if(remainder>max)
		{
			max=remainder;
			
		}
		num=num/10;
	}
	printf("Maximum digit of the number is %d",max);
	return 0;
}
