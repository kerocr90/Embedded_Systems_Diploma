/*
 ============================================================================
 Name        : E6.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int i, x, sum=0;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	for(i=1;i<=x;i++)
	{
		sum += i;
	}
	printf("sum: %d", sum);
	return 0;
}
