#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: function parameter
 * Return: void
 */

void print_triangle(int size)
{

	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (x = 1 ; x <= size ; x++)
	{
		int spaces;

		for (spaces = size - x ; spaces > 0 ; spaces--)
		{
			_putchar(' ');
		}
		for (y = 1 ; y <= x ; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
