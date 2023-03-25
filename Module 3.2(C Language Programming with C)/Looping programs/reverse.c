#include<stdio.h>
main()
{
	int num,remainder,reverse=0;
	printf("Enter any Number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	
	}
	printf("%d",reverse);
}
