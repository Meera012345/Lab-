#include<stdio.h>
#include<conio.h>
void main()
{
	int a=25,b=23,c=30,d=55,e=125;
	clrscr();
	if(e>d)
	{
		if(e>c)
		{
			printf("E is Maximum.");
		}
		else
		{
			printf("C is maximum.");
		}
	}
	else
	{
		if(e>b)
		{
			printf("E is maximum.");
		}
		else if(e>a)
		{
			printf("E is maximum.");
		}
		else
		{
			printf("B is maximum.");
		}
	}
	getch();
}