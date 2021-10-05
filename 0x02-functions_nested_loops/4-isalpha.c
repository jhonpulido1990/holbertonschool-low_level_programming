#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: data
 * Return: 1 if is alphabet and 0 if is other
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
