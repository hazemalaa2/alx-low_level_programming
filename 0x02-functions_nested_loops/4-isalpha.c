#include "main.h"

/**
 * isalpha - entry point
 *
 * @c: function 
 *
 * Return: Always 0 (Success)
 * return 1 if c is letter
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
