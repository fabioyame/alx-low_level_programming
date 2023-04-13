#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats strings to another string
 * @s1: string one
 * @s2: string two
 * @n: n is the number of bytes
 * from s2 to concatenate to s1
 * Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, ln1, ln2;
	char *s;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	ln1 = 0;
	ln2 = 0;
	while (s2[ln2] != '\0')
		ln2++;
	while (s1[ln1] != '\0')
		ln1++;

	if (n >= ln2)
		n = ln2;

	s = malloc(sizeof(char) * n + ln1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ln1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + ln1] = s2[i];

	s[i + ln1] = '\0';

	return (s);
}
