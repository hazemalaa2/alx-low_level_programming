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
	int digit = 0;

	while (digit <= 9)
	{
		/*Ascii conversion*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
