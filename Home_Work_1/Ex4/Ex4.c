/*
 ============================================================================
 Name        : Ex4.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Home Work 1 - Ex 4
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x, y;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product = %f", x*y);
	return 0;
}
