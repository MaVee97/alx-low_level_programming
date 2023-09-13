#include <stdio.h>

/**
 * main - prints out the first 98 Fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	int x;
	unsigned long int next;

	printf("%lu, %lu", num1, num2);

	for (x = 2 ; x < 96 ; x++)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		printf(", %lu", next);
	}
	printf("\n");
	return (0);
}
