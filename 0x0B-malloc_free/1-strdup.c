#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: string copy
 */
char *_strdup(char *str)
{
	int i;
	int a;
	char *ptr1;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr1 = (char *)malloc((i + 1) * sizeof(char));
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		ptr1[a] = str[a];
	}
	return (ptr1);
}
