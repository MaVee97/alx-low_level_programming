#include "main.h"

/**
 * print_square - prints a aquare using #
 * @size: function parameter
 * Return: 0
 */

void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (x = 1 ; x <= size ; x++)
	{
		for (y = 1 ; y <= size ; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
