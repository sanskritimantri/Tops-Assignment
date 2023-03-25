#include<stdio.h>
main()
{
	int row,col;
//	printf("Enter the number of row : ");
//	scanf("%d",&row);
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",col%2);
		}
		printf("\n");
	}
	return 0;
}
