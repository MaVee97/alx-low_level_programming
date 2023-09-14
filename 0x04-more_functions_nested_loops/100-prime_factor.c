#include <stdio.h>
/**
 * findLargestPrimeFactor - finds the largest prime factor
 * @n: function parameter
 * Return: largestPrimeFactor
 */

unsigned long findLargestPrimeFactor(unsigned long n)
{
	unsigned long largestPrimeFactor = -1;
	unsigned long factor;

	while (n % 2 == 0)
	{
		largestPrimeFactor = 2;
		n /= 2;
	}

	for (factor = 3 ; factor * factor <= n ; factor += 2)
	{
		while (n % factor == 0)
		{
			largestPrimeFactor = factor;
			n /= factor;
		}
	}

	if (n > 1)
	{
		largestPrimeFactor = n;
	}

	return (largestPrimeFactor);
}

int main() 
{
	unsigned long number = 612852475143;
	unsigned long result = findLargestPrimeFactor(number);
	printf("%lu\n", result);

	return (0);
}

