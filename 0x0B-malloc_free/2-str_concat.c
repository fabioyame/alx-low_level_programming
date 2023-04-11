#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings for size
 * @s1: string 1 to concat
 * @s2: string 2 to concat
 * Return: returns concated string s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, not1, not2;
	char *conc;

	i = 0;
	not1 = 0;
	not2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		not1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		not2++;
	}

	conc = malloc(sizeof(char) * (not1 + not2 + 1));
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < not1; i++)
	{
		conc[i] = s1[i];
	}

	for (i = 0; i < not2; i++)
	{
		conc[i + not1] = s2[i];
	}
	conc[i + not1] = '\0';
	return (conc);
}
