/*
 ============================================================================
 Name        : Ex6.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
Description : Home Work 1 - Ex 6
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x, y, temp=0;
	printf("Enter a value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&x);
	printf("Enter a value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&y);
	temp = y;
	y = x;
	x = temp;
	printf("After swapping, value of a =  %f\r\n", x);
	printf("After swapping, value of b =  %f", y);
	return 0;
}
