#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 *  @separator: array
 * @n: size ar
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);
		if (p != NULL)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
