#include<stdio.h>
int main()
{
	int array[10],i,max=0;
	printf("Please enter 10 values:\n");
	for(i=0;i<10;i++)
	scanf("%d",&array[i]);
	
	max=array[10];
	for(i=1;i<10;i++)
	{
		if(max<array[i])
		max=array[i];
	}
	printf("Maximum value of array : %d",max);
	return 0;
}
