#ifndef FUNTIONS_POINTERS
#define FUNTIONS_POINTERS
/*include library*/
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNTIONS_POINTERS*/
