#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <unistd.h>
#include <stdio.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*Write a function that fills memory with a constant byte*/
char *_memset(char *s, char b, unsigned int n);
/*Write a function that copies memory area.*/
char *_memcpy(char *dest, char *src, unsigned int n);
/*Write a function that locates a character in a string*/
char *_strchr(char *s, char c);
/*Write a function that gets the length of a prefix substring*/
unsigned int _strspn(char *s, char *accept);
/*Write a function that searches a string for any of a set of bytes*/
char *_strpbrk(char *s, char *accept);
/*Write a function that locates a substring*/
char *_strstr(char *haystack, char *needle);
/*Write a function that prints the chessboard*/
void print_chessboard(char (*a)[8]);
/*prints the sum of the two diagonals of a square matrix of integers*/
void print_diagsums(int *a, int size);
/*Write a function that sets the value of a pointer to a char*/
void set_string(char **s, char *to);

#endif /* MAIN_H */
