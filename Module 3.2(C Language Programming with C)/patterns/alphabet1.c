#include<stdio.h>
main()
{
	int row,col;
	char ch='A';
	for(row=0;row<=4;row++)
	{
		for(col=0;col<=row;col++)
		printf("%c",ch++);
		printf("\n");
	}
	return 0;
	
	
}


