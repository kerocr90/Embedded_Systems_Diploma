/*
 ============================================================================
 Name        : E8.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x, y;
	char c;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	printf("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&x, &y);
	if(c == '+')
	{
		printf("%f + %f = %f\n",x,y, x+y);
	}
	else if(c == '-')
	{
		printf("%f - %f = %f\n",x,y, x-y);
	}
	else if(c == '*')
	{
		printf("%f * %f = %f\n",x,y, x*y);
	}
	else if(c == '/')
	{
		printf("%f / %f = %f\n",x,y, x/y);
	}
	else
	{
		printf("wrong input\f");
	}

}
