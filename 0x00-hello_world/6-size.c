#include <stdio.h>


/**
 *main - entry point
 *
 *Description: A C program that prints Data sizes
 *
 *Return: Always 0 (Success)
*/

int main(void)
{	
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(longint));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}				
