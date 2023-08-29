/*
 ============================================================================
 Name        : E7.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	unsigned long x, mul=1;
	int i;
	while(1)
	{
		printf("enter an integer: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%lu",&x);
		if(x>0)
		{
			for(i=1; i<=x; i++)
			{
				mul *= i;
			}
			printf("Factorial: %lu\n",mul);
		}
		else if (x<0)
		{
			printf("Error!!! Factorial of negative doesn't exist\n");
		}
		else
		{
			printf("Factorial of zero = 1\n");
		}
	}
	return 0;
}
