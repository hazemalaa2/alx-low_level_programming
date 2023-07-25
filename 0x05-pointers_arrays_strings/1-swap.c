#include "main.h"

/**
 * swap_int - entry point
 *
 * @a: function
 * @b: sa
 *
 *Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
