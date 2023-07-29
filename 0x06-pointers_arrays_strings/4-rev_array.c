#include "main.h"
/**
 * reverse_array - entry point
 * @a: input value
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;
	int j;

	for (i = 0, j = (n - 1); i < j; i++; j--;)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
