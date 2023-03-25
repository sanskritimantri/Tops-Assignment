#include<stdio.h>
main()
{
	int row,col,height;
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<5;col++)
		{
			printf("");
		}
		for(height=1;height<=row;height++)
		{
			printf("*");
		}
		
		
		printf("\n");
	}
	for(row=1;row<=5;row++)
	{
		for(col=2;col<=row;col++)
		{
			printf("");
		}
		for(height=row;height<=5;height++)
		{
			printf("*");
		}
		
		
		printf("\n");
	}
	return 0;
}
