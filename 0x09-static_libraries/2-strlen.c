#include "main.h"

/**
 * _strlen - entry point
 *
 * @s: function
 *
 *Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;

	return (counter);
}
