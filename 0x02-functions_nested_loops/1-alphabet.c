#include "main.h"

/**
 * print_alphabet - this function prints lower case alphabets.
 *
 * Return: should be 0 if succesful
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
