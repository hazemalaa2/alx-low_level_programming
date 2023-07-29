#include <unistd.h>

/**
 * _putchar - entry point
 *
 * @c: function
 *
 *Return: Always 1. (Success)
 *on error, -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
