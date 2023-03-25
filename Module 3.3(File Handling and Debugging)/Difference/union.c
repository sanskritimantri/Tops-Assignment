#include<stdio.h>

union employee
{
	int empno;
	char empname[4];
	char address[4];
	int age;
	
	
};
main()
{
	union employee e;
	printf("Enter your no:-\n");
	scanf("%d",&e.empno);
	printf("%d",e.empno);
	
	printf("Enter your name:-\n");
	scanf("%s",&e.empname);
	printf("%s",e.empname);
	
	printf("Enter your address:-\n");
	scanf("%s",&e.address);
	printf("%s",e.address);
	
	printf("Enter your age:-\n");
	scanf("%d",&e.age);
	printf("%d",e.age);
}


