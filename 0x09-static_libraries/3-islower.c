#include "main.h"

/**
 * _islower - entry point
 *
 * @c: checks
 *
 * Return: Always 0 (Success)
 * returns 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
