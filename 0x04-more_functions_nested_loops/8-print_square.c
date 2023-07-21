#include "main.h"

/**
 * print_square - entry point
 *
 * @size: size of the sq
 *
 *Return: Always 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, w;

		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
