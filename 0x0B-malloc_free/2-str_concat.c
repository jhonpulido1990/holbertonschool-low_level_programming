#include "main.h"
/**
 * str_concat - concated two strings
 * @s1: string one
 * @s2: string two
 * Return: strings cocated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, p, k, size;
	char *ptr1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	size = i + j;
	ptr1 = (char *)malloc((size + 1) * sizeof(char));
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < i; p++)
	{
		if (s1[p] != '\0')
		{
			ptr1[p] = s1[p];
		}
	}
	for (k = 0; p < size; k++)
	{
		ptr1[p] = s2[k];
		p++;
	}
	ptr1[p] = '\0';
	return (ptr1);
}
