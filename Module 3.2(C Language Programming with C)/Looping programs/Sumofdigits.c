#include<stdio.h>
main()
{
	int num,remainder=0,sum=0;
	printf("Enter any number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		num=num/10;
		sum=num+remainder;
		
	}
	printf("Sum is %d",sum);
	return 0;
	
}
