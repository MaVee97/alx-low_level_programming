#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: parameter to be checked
 * Return: x
 */

int print_last_digit(int a)
{
	int x;

	x = a % 10;

	if (a < 0)
	{
		x = -x;
		_putchar(x + '0');
	}
	return (x);
}
