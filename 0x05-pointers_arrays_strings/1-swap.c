#include "main.h"

/**
 * swap_int - swaps int 1 with int 2
 * @a: function parameter
 * @b: function parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
