#include<stdio.h>
main()
{
	int a[2][3],b[2][3],sum[2][3],sub[2][3],mul[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a number :- ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		
		}
		
	
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a number :- ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",b[i][j]);
		
		}
		
	
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		sum[2][3]=a[i][j]+b[i][j];
	    printf(" %d ",sum[i][j]);
	    }
	    printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		sum[2][3]=a[i][j]-b[i][j];
	    printf(" %d ",sub[i][j]);
	    }
	    printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		sum[2][3]=a[i][j]*b[i][j];
	    printf(" %d ",mul[i][j]);
	    }
	    printf("\n");
	}


}
	
	
	

	
	
	
