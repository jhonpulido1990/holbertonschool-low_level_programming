#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 * Return: pointers
 */
void *malloc_checked(unsigned int b)
{
	int *malloc_checked = malloc(b);

	if (malloc_checked == NULL)
	{
		exit(98);
	}
	return (malloc_checked);
}
