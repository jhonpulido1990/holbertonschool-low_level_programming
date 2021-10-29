#include "main.h"
/**
 * string_nconcat - concat two strings
 * @s1: string one
 * @s2: string two
 * @n: size string two
 * Return: concat strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	{
		unsigned int i, j, p, k, size;
		char *ptr1;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		for (i = 0; s1[i]; i++)
			;
		for (j = 0; s2[j]; j++)
			;
		if (n >= j + 1)
			size = i + j;
		else
			size = i + n;
		ptr1 = malloc((size + 1) * sizeof(char));
		if (ptr1 == NULL)
			return (NULL);
		for (p = 0; s1[p] != '\0'; p++)
		{
			ptr1[p] = s1[p];
		}
		for (k = 0; p <= size; k++)
		{
			ptr1[p] = s2[k];
			p++;
		}
		ptr1[size] = '\0';
		return (ptr1);
	}
}
