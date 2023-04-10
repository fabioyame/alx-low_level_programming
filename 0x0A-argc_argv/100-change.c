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
	int coins = 0;
int money;
	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}
				money = atoi(argv[argc - 1]);

		while (money > 0)
		{
			if (money % 25 == 0)
			{
				money -= 25;
			} else if (money % 10 == 0)
			{
				money -= 10;
			} else if (money % 5 == 0)
			{
				money -= 5;
			} else if (money % 2 == 0)
			{
				money -= 2;
			} else
			{
				money--;
			}
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
