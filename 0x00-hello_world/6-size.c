#include <stdio.h>
/**
 *main - prints the size of various types
 *
 *Return: 0
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(long long int));
	printf("%lu\n", sizeof(float));
	return (0);
}
