#include<stdio.h>
main()
{
	int row,col;
	for(row=0;row<=5;row++)
	{
		for(col=0;col<row;col++)
		printf("%c",'A'+col);
		printf("\n");
	}
	return 0;
}
