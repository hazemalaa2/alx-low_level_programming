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

	if (n <= 0)
		putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar(95);
		_putchar('\n');
	}
}
