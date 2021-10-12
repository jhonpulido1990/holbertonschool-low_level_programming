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
/*Write a function that prints a string, followed by a new line, to stdout*/
void _puts(char *str);
/*function that prints a string, in reverse, followed by a new line.*/
void print_rev(char *s);
/*Write a function that reverses a string.*/
void rev_string(char *s);
/*Write a function that prints every other character of a string*/
void puts2(char *str);
/*Write a function that prints half of a string*/
void puts_half(char *str);
/*function that prints n elements of an array of integers*/
void print_array(int *a, int n);
/*Write a function that copies the string pointed to by src*/
char *_strcpy(char *dest, char *src);

#endif /* MAIN_H */
