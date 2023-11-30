#include <stdio.h>
int main(){
	int a,b,c,one,two,three,four,five,six;
	printf("Enter a Number: ");
	scanf("	%d", &a);
	printf("Enter a Number: ");
	scanf("%d", &b);
	printf("Enter a Number: ");
	scanf("%d", &c);
	if ( a==1 && b==1 && c==1)
		{
			printf("One appears three times\n");
		}
		else if (a==1 && b==1 || b==1 && c==1 || c==1 && a==1)
			{
				printf("one appears two times\n");
			}
			else if(a==1||b==1||c==1)
				{
					printf("one appears one times\n");
				}
	if ( a==2 && b==2 && c==2)
		{
			printf("Two appears three times\n");
		}
		else if (a==2 && b==2 || b==2 && c==2 || c==2 && a==2)
			{
				printf("Two appears two times\n");
			}
			else if(a==2||b==2||c==2)
				{
					printf("Two appears one times\n");
				}
	if ( a==3 && b==3 && c==3)
		{
			printf("Three appears three times\n");
		}
		else if (a==3 && b==3 || b==3 && c==3 || c==3 && a==3)
			{
				printf("Three appears two times\n");
			}
			else if(a==3||b==3||c==3)
				{
					printf("Three appears one times\n");
				}
	if ( a==4 && b==4 && c==4)
		{
			printf("Four appears three times\n");
		}
		else if (a==4 && b==4 || b==4 && c==4 || c==4 && a==4)
			{
				printf("Four appears two times\n");
			}
			else if(a==4||b==4||c==4)
				{
					printf("Four appears one times\n");
				}
	if ( a==5 && b==5 && c==5)
		{
			printf("Five appears three times\n");
		}
		else if (a==5 && b==5 || b==5 && c==5 || c==5 && a==5)
			{
				printf("Five appears two times\n");
			}
			else if(a==5||b==5||c==5)
				{
					printf("Five appears one times\n");
				}
	if ( a==6 && b==6 && c==6)
		{
			printf("Six appears three times\n");
		}
		else if (a==6 && b==6 || b==6 && c==6 || c==6 && a==6)
			{
				printf("Six appears two times\n");
			}
			else if(a==6||b==6||c==6)
				{
					printf("Six appears one times\n");
				}
	
	return 0;
}
