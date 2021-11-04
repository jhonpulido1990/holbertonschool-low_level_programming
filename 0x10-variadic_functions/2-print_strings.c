#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.

 *  
 * 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		printf(" ");
	}
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char*));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
