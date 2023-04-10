#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - The main function to print
 * minimum number of coins
 * @argc: Argument count
 * @argv: Vector of arguments
 * Return: Always 0
 */
int main(int argc, char  *argv[])
{
	int c = 0;
	int mon;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}
	mon = atoi(argv[argc - 1]);

		while (mon > 0)
		{
			if (mon % 25 == 0)
			{
				mon -= 25;
			} else if (mon % 10 == 0)
			{
				mon -= 10;
			} else if (mon % 5 == 0)
			{
				mon -= 5;
			} else if (mon % 2 == 0)
			{
				mon -= 2;
			} else
			{
				mon--;
			}
			c++;
		}
		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	return (1);
}
