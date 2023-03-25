#include<stdio.h>
main()
{
	float SI,P,R,T;
	printf("Enter the principal : ");
	scanf("%f",&P);
	printf("Enter the Rate of Interest : ");
	scanf("%f",&R);
	printf("Enter the Time : ");
	scanf("%f",&T);
	SI=P*R*T/100;
	printf("Simple Interest = %f",SI);
}
