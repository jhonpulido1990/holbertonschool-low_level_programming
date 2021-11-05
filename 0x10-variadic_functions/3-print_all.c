#include "variadic_functions.h"
/**
 * print_all - Write a function that prints anything
 * @format: data protec
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int pos = 0;
	char c, *s, *comn;

	comn = ", ";
	va_start(ap, format);
	while (format && format[pos])/*llamado a un formato protegido*/
	{
		switch (format[pos])
		{
		case 'c':
			c = va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char*);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			pos++;
			continue;
		}
		if (format[pos + 1] != '\0')
			printf("%s", comn);
		pos++;
	}
	printf("\n");
	va_end(ap);
}
