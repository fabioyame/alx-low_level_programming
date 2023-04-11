#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - gives array of args
 * @ac: argument count
 * @av: array of arguments double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int size;
	char *s;
	int m;
	int n;
	int p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
			size++;
	}

	size += (ac + 1);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	p = 0;
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
		{
			s[p] = av[m][n];
			p++;
		}
		s[p] = '\n';
		p++;
	}

	s[p] = '\0';

	return (s);
}
