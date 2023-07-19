#include "main.h"

/**
 *main - entry point
 * 
 *Description: function
 *
 *Write a function that prints the alphabe.
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
