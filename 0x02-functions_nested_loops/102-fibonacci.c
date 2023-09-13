#include <stdio.h>

/**
 * main - prints out the first 50 Fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int x;
	int next;

	printf("%d, %d, ", num1, num2);

	for (x = 1 ; x < 50 ; x++)
	{
		next = num1 + num2;
		num2 = num1;
		num2 = next;
		printf("%d, ", next);
	}
	printf("\n");
	return (0);
}
