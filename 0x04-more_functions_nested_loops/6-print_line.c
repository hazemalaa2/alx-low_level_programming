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
	int lnChr;

	for (n <= 0)
		putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
