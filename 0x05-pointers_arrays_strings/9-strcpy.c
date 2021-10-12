#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by
 * @dest: data
 * @src: data
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];

	}
	dest[a] = src[a];
	return (dest);
}