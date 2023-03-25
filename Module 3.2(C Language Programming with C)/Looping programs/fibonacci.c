#include<stdio.h>
main()
{
	int i,num,first=0,second=1,third;
	printf("Enter any number :-");
	scanf("\n%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n%d",first);
		third=second+first;
		first=second;
		second=third;
	}
}
