#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Main function that prints number
 * @argc: Argument count
 * @argv: Vector of arguments
 *
 * Return: Always 0
 */

int main(int argc, char  *argv[])
{
UNUSED(argv);
printf("%d\n", argc - 1);
return (0);
}
