#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 * Return: haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr1 = haystack;
	char *ptr2 = needle;

	while (*haystack != '\0')
	{
		haystack = ptr1;
		ptr2 = needle;
		while (*ptr2 != '\0' && *ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
		{
			return (haystack);
		}
		ptr1 = haystack + 1;
	}
	return (NULL);
}
