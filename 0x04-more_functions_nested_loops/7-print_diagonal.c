#include "main.h"

/**
 * print_diagonal - entry point
 * @n: sad1
 * Return: always 0
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
