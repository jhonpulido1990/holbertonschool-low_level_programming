#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <unistd.h>
#include <stdio.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*updates the value it points to to 98.*/
void reset_to_98(int *n);
/*function that swaps the values of two integers*/
void swap_int(int *a, int *b);
/*function that returns the length of a string*/
int _strlen(char *s);

#endif /* MAIN_H */
