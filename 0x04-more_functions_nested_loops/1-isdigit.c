#include "main.h"

/**
 * _isdigit - entry point
 *
 * @c: function
 *
 *Return: 1 if digit else  0 (Success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
