#include "main.h"

/**
 * print_diagonal - prints a diagonal structure
 * @n: function parameter
 * Return: void
 */

void print_diagonal(int n)
{

	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (x = 1 ; x <= n ; x++)
	{
		int spaces;

		for (spaces = 1 ; spaces < x ; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

