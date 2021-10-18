#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: content is to be copied
 * @src: data to be copied
 * @n: number of bytes to copy.
 * Return: copies memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
