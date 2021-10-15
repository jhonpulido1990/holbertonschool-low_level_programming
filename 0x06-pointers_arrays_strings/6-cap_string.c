#include "main.h"
/**
 * cap_string - Capitalizes a string
 * @str: string input
 * Return: string output
 */

char *cap_string(char *str)
{
	char specialChar[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
							'"', '(', ')', '{', '}', '\0'};
	int run;
	int runner = 0;

	for (run = 0; str[run] != '\0'; run++)
	{
		for (runner = 0; specialChar[runner]; runner++)
		{
			if (str[run] >= 97 && str[run] <= 122)
			{
				if (str[run - 1] == specialChar[runner])
				{
					str[run] = str[run] - 32;
				}
				else if (run == 0)
				{
					str[run] = str[run] - 32;
				}
			}
		}
	}
	return (str);
}
