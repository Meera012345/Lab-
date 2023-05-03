

#include<stdio.h>
#include<conio.h>
void main()
{
	int a=13,b=5,c=24;
	clrscr();
	if(c>a)
	{	if(c>b)
		{
			printf("B is minimum.");
		}
		else
		{
			printf("C is Minimum.");
		}
	}
	else
	{
		if(a>b)
		{
			printf("B is Minimum.");
		}
		else
		{
			printf("A is Minimum.");
		}
	}
	getch();
}

