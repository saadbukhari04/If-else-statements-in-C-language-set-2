#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    
	int	a = (rand() % 5) + 1;
    int	b = (rand() % 5) + 1;
    int	c = (rand() % 5) + 1;
    
    printf("%d	%d	%d\n", a , b ,c);
    
    if(a==b && b==c)
    	{
    		printf("All are same\n");
		}
    if(a!=b && b!=c && a!=c)
    	{
    		printf("All are different\n");
		}
	if (a>=b && a>=c)
		{
			printf("First Number is greatest\n");
		}
		else if (b>=a && b>=c)
			{
				printf("Second Number is greatest\n");
			}
			else
				{
					printf("Third Numberis greatest\n");
				}
	if (a<=b && a<=c)
		{	
			printf("First Number is smallest\n");
		}
		else if (b<=a && b<=c)
			{
				printf("Second Number is smallest\n");
			}
			else
				{
					printf("Third Number is smallest\n");
				}
	if (a>b && b>c)
		{
			printf("First Number and Second Number are greater than third\n");
		}
		else if (a>b && c>b)
			{
				printf("First Number and Third Number are greater than second\n");
			}
			else 
				{
					printf("Second Number and Third Number are greater than first\n");
				}
	if (b>a && a>c)
		{
			printf("First Number is in the middle of Second Number and third\n");
		}
		else if (a>b && b>c)
			{
				printf("Second Number is in the middle of first Number and third Number\n");
				
			}
			else 
				{
					printf("Third Number is in the middle of first Number and second Number\n");
				}
			
	
		return 0;
		}
