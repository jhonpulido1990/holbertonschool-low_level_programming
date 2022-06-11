#ifndef HEADER_FILE
#define HEADER_FILE
/*include library*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*function that searches for a value in an array of integers*/
int linear_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array*/
int binary_search(int *array, size_t size, int value);

#endif /*HEADER_FILE*/
