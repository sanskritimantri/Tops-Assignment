#include<stdio.h>
main()
{
	int row,col,height;
	for(row=1;row<=5;row++)
	{
		for(col=row;col<=5;col++)
		{
			printf("");
		}
		for(height=1;height<(row*2);height++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
