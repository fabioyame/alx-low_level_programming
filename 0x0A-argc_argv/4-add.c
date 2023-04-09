#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)

/**
 * StringCheck - Function to check string
 * @s: string to be check
 * Return: boolean
 */
int StringCheck(char *s)
{
int i = 0;

for (; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
{
return (0);
}
}
return (1);
}
/**
 * main - The main function
 * @argc: Argument count
 * @argv: Vector of arguments
 *Return: Always 0
 */
int main(int argc, char  *argv[])
{
int i;
int result = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (StringCheck(argv[i]))
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", result);
return (0);
}
else
{
printf("%d\n", 0);
return (1);
}
}
