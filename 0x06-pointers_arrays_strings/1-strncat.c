#include "main.h"
/**
 * _slen - leng string of dest
 * @strings: is a string
 * Return: value of the leng string
 */
int _slen(char *strings)
{
	int count = 0;

	for (; strings[count] != '\0'; count++)
	{
	}
	return (count);
}
/**
 * _strncat - function that concatenates two strings
 * @dest: s1
 * @src: s2
 * @n: value int
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = _slen(dest);
	int a;

	for (a = 0; ((a < n) && (src[a] != '\0')); a++)
	{
		dest[dlen + a] = src[a];
	}
	dest[dlen + a] = '\0';

	return (dest);
}
