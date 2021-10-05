#include "main.h"
/**
 *
 *
 *
 */
void print_to_98(int n)
{
int i = 0;

if (n < 98)
{
for (i = n; i < 99; i++)
{
_putchar('i');
_putchar(' ');
_putchar(',');
i++;
}
}
if (n > 98)
{
for (i = n; i < 99; i++)
{
_putchar('i');
_putchar(' ');
_putchar(',');
i--;
}
}
}
