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
	char *csrc = src;
	char *cdest = dest;

	while (n > 0)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		n--;
	}
	return (cdest);
}
