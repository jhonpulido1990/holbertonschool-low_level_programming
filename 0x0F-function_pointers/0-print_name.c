#include "function_pointers.h"
/**
 * print_name - funtions
 * @name: name
 * @f: pointers a funtion
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
