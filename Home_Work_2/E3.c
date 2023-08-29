/*
 ============================================================================
 Name        : E3.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main()
{
	float x,y,z;
	printf("enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&x, &y, &z);
	if(x>y)
	{
		if(x>z)
		{
			printf("Largest number: %f",x);
		}
		else if (z>y)
		{
			printf("Largest number: %f",z);
		}

	}
	else
	{
		printf("Largest number: %f",y);
	}
}
