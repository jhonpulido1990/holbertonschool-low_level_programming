#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in s
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (s = p; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == '\0')
	{
		return (NULL);
	}
	return (s);
}
