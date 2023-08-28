/*
 ============================================================================
 Name        : Ex3.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Home Work 1 - Ex 3
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int x, y, sum;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&x,&y);
	sum =x+y;
	printf("sum = %d", sum);

	return 0;
}
