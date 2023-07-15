#include <stdio.h>


/**
 *main - entry point
 *
 *Description: A C program that prints with put function
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n'):
	
	return (0);
}

