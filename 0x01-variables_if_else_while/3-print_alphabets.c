#include <stdio.h>


/**
 *main - entry point
 *
 *Description: print upper and lowercase
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	
	while (ch <= 'z')
	{	
		putchar(ch);
		ch++;
		putchar('\n');
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
		putchar('\n');
	}
}	
	
