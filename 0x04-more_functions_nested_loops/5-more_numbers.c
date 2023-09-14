#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 1 ; x <= 14 ; x++)
	{

		for (y = 0 ; y < 10 ; y++)
		{
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
