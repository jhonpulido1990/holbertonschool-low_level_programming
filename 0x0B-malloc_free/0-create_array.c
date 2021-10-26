#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: This is the size of the memory block, in bytes
 * @c: caracter to copy
 * Return: data
 */
char *create_array(unsigned int size, char c)
{
	char *prt = malloc(size * sizeof(int));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (c == '\0')
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		prt[i] = c;
	}
	return (prt);
}
