#include "main.h"

/**
 * print_alphabet_x10 - this function prints alphabets x10
 *
 * Return: should be 0 if succesful
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}
	_putchar('\n');
	}
}
