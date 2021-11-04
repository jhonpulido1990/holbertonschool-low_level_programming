#ifndef CALCULATOR_H
#define CALCULATOR_H
/*include library*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/*3-get_op_func nota nota not insert prototipe of main*/
int (*get_op_func(char *s))(int, int);
/*op_functions*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /*CALCULATOR_H*/
