#include<stdio.h>
main()
{
	int row,col,height=0;
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=5-row;col++)
		{
			printf("");
		}
		for(height=1;height<=(2*row-1);height++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
