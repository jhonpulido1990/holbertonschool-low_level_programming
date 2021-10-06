#ifndef HEADER_FILE
#define HEADER_FILE
/*include library*/
#include <unistd.h>
#include <stdio.h>
/*call a funtion _putchar*/
int _putchar(char c);
/*print alphabet*/
void print_alphabet(void);
/*print alphabet x10*/
void print_alphabet_x10(void);
/*checks for lowercase character*/
int _islower(int c);
/*checks for alphabetic character*/
int _isalpha(int c);
/*prints the sign of a number*/
int print_sign(int n);
/*the absolute value of an integer*/
int _abs(int);
/*prints the last digit of a number*/
int print_last_digit(int);
/*function that prints every minute of the day*/
void jack_bauer(void);
/*function that prints the 9 times table*/
void times_table(void);
/*adds two integers and returns the result*/
int add(int, int);
/*prints all natural numbers from n to 98, followed by a new line*/
void print_to_98(int n);
/*function that prints the n times table, starting with 0*/
void print_times_table(int n);

#endif /*HEADER_FILE*/
