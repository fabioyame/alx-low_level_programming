#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function that multiplies two numbers
 * @argc: Argument count
 * @argv: Vector of arguments
 *
 * Return: Always return result
 */

int main(int argc, char  *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
printf("Error\n");
return (1);
}
