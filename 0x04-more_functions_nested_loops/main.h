#ifndef HEADER_FILE
#define HEADER_FILE
/*include library*/
#include <unistd.h>
#include <stdio.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*function that checks for uppercase character*/
int _isupper(int c);
/*function that checks for a digit (0 through 9)*/
int _isdigit(int c);
/*function that multiplies two integers*/
int mul(int a, int b);
/*prints the numbers, from 0 to 9, followed by a new line*/
void print_numbers(void);
/*prints the numbers, from 0 to 9, followed by a new line*/
void print_most_numbers(void);
/*prints 10 times the numbers, from 0 to 14, followed by a new line*/
void more_numbers(void);
/*function that draws a straight line in the terminal*/
void print_line(int n);
/*function that draws a diagonal line on the terminal*/
void print_diagonal(int n);
/*function that prints a square, followed by a new line*/
void print_square(int size);
/*prints a triangle, followed by a new line*/
void print_triangle(int size);

#endif /*HEADER_FILE*/
