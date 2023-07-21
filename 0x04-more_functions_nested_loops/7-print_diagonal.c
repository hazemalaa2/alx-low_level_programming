#include "main.h"

/**
 * print_diagonal - entry point
 * @n: sad1
 *Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <=0)
		_putchat('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
