#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: function parameter
 * @old_size: function parameter
 * @new_size: function parameter
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pntr1;
	char *old_pntr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pntr1 = malloc(new_size);
	if (!pntr1)
		return (NULL);

	old_pntr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			pntr1[x] = old_pntr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			pntr1[x] = old_pntr[x];
	}

	free(ptr);
	return (pntr1);
}
