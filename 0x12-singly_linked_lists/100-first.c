#include<stdio.h>
/**
 * myStartupFun - execute before main()
 */
void myStartupFun(void) __attribute__ ((constructor));
/* implementation of myStartupFun */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
