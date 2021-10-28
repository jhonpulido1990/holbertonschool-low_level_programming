#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*function that allocates memory using malloc*/
void *malloc_checked(unsigned int b);
/*Write a function that concatenates two strings*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
/*function that allocates memory for an array, using malloc*/
void *_calloc(unsigned int nmemb, unsigned int size);
/*Write a function that creates an array of integers*/
int *array_range(int min, int max);


#endif /* MAIN_H */
