#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: s1
 * @src: data
 * @n: posistion string
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
