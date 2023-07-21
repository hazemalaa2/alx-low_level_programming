#include "main.h"

/**
 * print_line - entry point
 *
 * @n: function
 *
 *Return: Always 0 (Success)
*/

void print_line(int n)
{
	int chr;

	for (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (chr = 1; chr <= n; chr++)
			_putchar('_');
		_putchar('\n');
	}
}
