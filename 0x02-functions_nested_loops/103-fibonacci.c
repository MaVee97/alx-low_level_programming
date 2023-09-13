#include <stdio.h>

/**
 * main - prints out even numbers less than 4000000 in the fibonacci sequence
 *
 * Return: void
 */

int main(void)
{
	unsigned long int num1 = 0;
	unsigned long int num2 = 1;
	int x;
	unsigned long int sum = 0;
	unsigned long int next;


	for (x = 1 ; x < 50 ; x++)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		if (next < 4000000 && next % 2 == 0)
		{
			sum = sum + next;
		}

	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
