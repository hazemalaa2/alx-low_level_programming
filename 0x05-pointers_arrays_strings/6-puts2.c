#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: function
 *
 *Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
