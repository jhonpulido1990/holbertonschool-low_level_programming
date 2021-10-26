#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*function that creates an array of chars*/
char *create_array(unsigned int size, char c);
/*function that returns a pointer to a newly allocated space in memory*/
char *_strdup(char *str);
/*function that concatenates two strings*/
char *str_concat(char *s1, char *s2);
/*function that returns a pointer to a 2 dimensional array of integers*/
int **alloc_grid(int width, int height);
/*frees a 2 dimensional grid previously created by your alloc_grid function*/
void free_grid(int **grid, int height);
/*0-main.c*/
void simple_print_buffer(char *buffer, unsigned int size);

#endif /* MAIN_H */
