#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: This is the main C string to be scanned
 * @accept: string containing the list of characters to match in s
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *p = accept;

	while (*s != '\0')
	{
		for (accept = p; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
		}
		if (*accept == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
