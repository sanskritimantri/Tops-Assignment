#include <stdio.h>
void main ()
{
 
    int number[30];
 
    int i, j, a, n;
    printf("Enter the value of N\n");
    scanf("%d", &n);
 
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
	scanf("%d", &number[i]);
 
    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j) 
        {
            if (number[i] < number[j]) 
            {
            	a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
}
 
