/*
 ============================================================================
 Name        : E4.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x;
	while(1)
	{
		printf("enter a number: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&x);
		if(x>0)
		{
			printf("%f is positive\n",x);
		}
		else if (x<0)
		{
			printf("%f is negative\n",x);
		}
		else
		{
			printf("you entered zero\n",x);
		}
	}
	return 0;
}

