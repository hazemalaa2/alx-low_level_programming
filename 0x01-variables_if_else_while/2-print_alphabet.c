#include <stdio.h>


/**
 *main - entry point
 *
 *Description: characters
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
