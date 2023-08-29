/*
 ============================================================================
 Name        : E5.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char c;
	while(1)
	{
		printf("enter a character: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&c);
		if((c>= 'a' && c<='z') || (c>= 'A' && c<='Z'))
		{
			printf("%c is alphabet\n",c);
		}
		else
		{
			printf("%c is not an alphabet\n",c);
		}
	}
	return 0;
}
