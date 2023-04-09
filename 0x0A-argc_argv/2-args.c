#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Main function that print
 * all arguments it recieves
 * @argc: Argument count
 * @argv: Vector of arguments
 *
 * Return: Always 0
 */

int main(int argc, char  *argv[])
{
int x;

for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
