#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string input
 * @n: data
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
	}
	printf("\n");
	va_end(ap);
}
