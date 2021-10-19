#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: C string to be scanned.
 * @accept: C string containing the characters to match
 * Return: s or 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	for (; *s != '\0'; s++)
	{
		for (accept = ptr; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
	}
	return (0);
}
