#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, answer;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			answer = x * y;
			if (y == 0)
			{
				printf("%d, ", answer);
			}
			else
			{
				printf("%2d,", answer);
				if (y != 9)
				{
					printf(", ");
				}
			}
			printf("%2d, ", answer);
		}
		printf("\n");
	}

}
