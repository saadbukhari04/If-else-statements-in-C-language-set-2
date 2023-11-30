#include <time.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    
	int	num1 = (rand() % 5) + 1;
    int	num2 = (rand() % 5) + 1;
    int	num3 = (rand() % 5) + 1;
    printf("%d	%d	%d\n", num1,num2,num3);
    
    if (num1==num2 && num2==num3)
    	{
			printf("All are equal\n");
			}
    if (num1!=num2 && num2!=num3 && num1!=num3)
    	{
    		printf("All are different\n");
			}	
    if (num1>num2 && num1 > num3)
		{
			printf("First is Largest\n"); 
			}	   
	if (num2>num1 && num2 > num3)
		{
			printf("Second is Largest\n");
		}
			 
	if (num3>num1 && num3 > num2)
		{
			printf("Third is Largest\n"); 
		}
	if (num1<num2 && num1 < num3)
			{
				printf("First is Smallest\n");
			}    
	if (num2<num1 && num2 < num3)
			{
				printf("Second is Largest\n");
				}	 
	if (num3<num2 && num3 < num1)
			{
				printf("Third is Largest\n");	
			}
	if (num1>num2 && num2>num3)
			{
				printf("First and second are greater than third\n");
			}
	if (num1>num2 && num2<num3)
			{
				printf("First and third are greater than second\n");
			}
	if (num2>num1 && num3>num1)
			{
				printf("Second and third are greater than First\n");
			}
	if (num1>=num2 && num2>=num3 || num3>=num2 && num2>=num1)
		{
			printf("Second is in the middle of First and third\n");
		}
	if (num2>=num1 && num1>=num3 || num3>=num1 && num1>=num2)
		{
			printf("First is in the middle of Second and third\n");
		}
	if (num1>=num3 && num3>=num2 || num2>=num3 && num3>=num1)
		{
			printf("Third is in the middle of First and Second\n");
		}
	
		return 0;
	}
