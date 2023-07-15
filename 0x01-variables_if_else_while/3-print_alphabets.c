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
	
	/*print from a to z*/

	while (ch <= 'z')
	{	
		putchar(ch);
		ch++;
	}

	/*print from A to Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
}	
	
