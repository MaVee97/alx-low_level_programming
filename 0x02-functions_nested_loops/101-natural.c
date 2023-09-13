#include <stdio.h>

/**
 * main - calculates and prints the sum of multpiles of 5 or 3
 *
 * Return: 0
 */

int main(void)
{
	int total = 0;
	int x;

	for (x = 1 ; x < 1024 ; x++)
	{

		if (x % 3 == 0 || x % 5 == 0)
		{
			total = total + x;
		}
	}
	printf("%d\n", total);
	return (0);
}
