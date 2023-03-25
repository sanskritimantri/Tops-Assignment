#include<stdio.h>

struct employee
{
	int empno;
	char empname[8];
	char address[8];
	int age;
	
	
};
main()
{
	struct employee e;
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


