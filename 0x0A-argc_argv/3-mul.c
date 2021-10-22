#include "main.h"
/**
 * main -  multiplies
 * @argc: counter
 * @argv: string
 * Return: return 0 or 1
 */
int main(int argc, char *argv[])
{
    int i = 1, mult = 1;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    for (i = 1; i < argc; i++)
    {
        mult *= atoi(argv[i]);
    }
    printf("%d\n", mult);
    return (0);
}
