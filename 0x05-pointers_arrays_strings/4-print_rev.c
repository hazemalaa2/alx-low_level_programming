#include "main.h"

/**
 * print_rev - entry point
 *
 * @s: function
 *
 *Return: Always 0 (Success)
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
