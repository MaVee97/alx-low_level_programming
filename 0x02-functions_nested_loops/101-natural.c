#include <stdio.h>

/**
 * main - calculates and prints the sum of multpiles of 5 or 3
 *
 * Return: 0
 */

int main(void)
{
	int total = 0;

	for (int x = 1 ; x < 1024 ; x++)
	{

		if (x % 3 == 0 || x % 5 == 0)
		{
			total = total + x;
		}
	}
	printf("The sum of multiples of 3 or 5 below 1024 are: %d\n", total);
	return (0);
}
