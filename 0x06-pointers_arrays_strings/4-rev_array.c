#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @n: function parameter
 * @a: function parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0 ; x < n / 2 ; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
