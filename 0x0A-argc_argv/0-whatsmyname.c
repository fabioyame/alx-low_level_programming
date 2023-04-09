#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Main function that prints name
 * @argc: Argument count
 * @argv: Vector of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
UNUSED(argc);
printf("%s\n", argv[0]);
return (0);
}
