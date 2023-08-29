/*
 ============================================================================
 Name        : E1.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Homework 2 - Ex 1
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int x;
	while(1)
	{
		printf("Enter an integer you want to check: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&x);
		if(x%2==0)
		{
			printf("%d is an even\n",x);
		}
		else
		{
			printf("%d is an odd\n",x);
		}
	}
	return 0;
}
