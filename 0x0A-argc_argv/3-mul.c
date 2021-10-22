#include "main.h"
/**
 * main - passed back to the command line interpreter
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int multi1 = 0;
    int multi2 = 0;
    int result = 0;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        multi1 = strtol(argv[1], NULL, 10);
        multi2 = strtol(argv[2], NULL, 10);

        result = multi1 * multi2;

        printf("%d\n", result);
    }

    return (0);
}
