/*
 ============================================================================
 Name        : E2.c
 Author      : Kerolos Shehata
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main()
{
	char c;
	while(1)
		{
			printf("Enter an alphabet: ");
			fflush(stdin);
			fflush(stdout);
			scanf("%c",&c);
			switch (c)
			{
			case 'a':
			case 'A':
				printf("%c is a vowel\n",c);
				break;
			case 'e':
			case 'E':
				printf("%c is a vowel\n",c);
				break;
			case 'i':
			case 'I':
				printf("%c is a vowel\n",c);
				break;
			case 'o':
			case 'O':
				printf("%c is a vowel\n",c);
				break;
			case 'u':
			case 'U':
				printf("%c is a vowel\n",c);
				break;
			default:
				printf("%c is a constant\n",c);
				break;
			}

		}
}
