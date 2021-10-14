#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <unistd.h>
#include <stdio.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*Write a function that concatenates two strings*/
char *_strcat(char *dest, char *src);
/*Write a function that concatenates two strings*/
char *_strncat(char *dest, char *src, int n);
/*Write a function that copies a string.*/
char *_strncpy(char *dest, char *src, int n);
/*function that compares two strings*/
int _strcmp(char *s1, char *s2);
/*function that reverses the content of an array of integers*/
void reverse_array(int *a, int n);

#endif /* MAIN_H */
