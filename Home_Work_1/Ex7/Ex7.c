/*
 ============================================================================
 Name        : Ex7.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
Description : Home Work 1 - Ex 7
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x, y;
	printf("Enter a value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&x);
	printf("Enter a value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("After swapping, value of a =  %f\r\n", x);
	printf("After swapping, value of b =  %f", y);
	return 0;
}
