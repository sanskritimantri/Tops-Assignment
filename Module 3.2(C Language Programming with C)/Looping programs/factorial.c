#include<stdio.h> 
main()
{
	int num,i,fact=1;
	printf("Enter any number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
