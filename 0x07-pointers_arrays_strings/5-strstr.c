#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 * Return: haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
			if (*haystack == *needle)
			{
				return (haystack);
				needle++;
			}
	}
	if (*haystack != *needle)
	{
		return (NULL);
	}
	return (haystack);
}
