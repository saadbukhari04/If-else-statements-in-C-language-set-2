#include <stdio.h>
int main(){
	int a,b,c,d,av;
	printf("Number 1 = ");
	scanf("%d", &a);
	printf("Number 2 = ");
	scanf("%d", &b);
	printf("Number 3 = ");
	scanf("%d", &c);
	printf("Number 4 = ");
	scanf("%d", &d);
	av = (a+b+c+d)/4;
	printf("Average = %d\n", av);
	if (a>av)
		{
			printf("First number is Larger than average\n");}
				else {
						printf("First number is Less than average\n");}
					
	if(b>av)
		{
			printf("Second number is Larger than average\n");}
			else 
				{
					printf("Second number is Less than average\n");}
		
	if(c>av)
		{
			printf("Third number is Larger than average\n");}
			else 
				{	printf("Third number is Less than average\n");
					}
		
	if(d>av)
		{
			printf("Fourth number is Larger than average\n");}
			else 
				{
					printf("Fourth number is Less than average\n");
				}
		
	return 0;
}
