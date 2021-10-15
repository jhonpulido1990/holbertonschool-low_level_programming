#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string in
 * Return: string out
 */
char *rot13(char *str)
{
	char temp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char temp2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr1 = temp;
	char *ptr2 = temp2;
	char *string = str;

	for (string = str; *string != '\0'; string++)
	{
		for (ptr1 = temp, ptr2 = temp2; *ptr1 != '\0'; ptr2++, ptr1++)
		{
			if (*string == *ptr1)
			{
				*string = *ptr2;
				break;
			}
		}
	}
	return (str);
}
