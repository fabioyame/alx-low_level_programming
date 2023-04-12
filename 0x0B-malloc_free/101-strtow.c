#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates index marking
 * @str: String to be searched
 * Return: index marking
*/
int word_len(char *str)
{
int ind = 0, len = 0;
while (*(str + ind) && *(str + ind) != ' ')
{
len++;
ind++;
}
return (len);
}
/**
 * count_words - Counts the number of words
 * @str: String to be search
 * Return: number of words contained
 */
int count_words(char *str)
{
int ind = 0, wrd = 0, len = 0;
for (ind = 0; *(str + ind); ind++)
len++;
for (ind = 0; ind < len; ind++)
{
if (*(str + ind) != ' ')
{
wrd++;
ind += word_len(str + ind);
}
}
return (wrd);
}
/**
 * strtow -Splits a string
 * @str: String to be splited
 * Return: return NULL is str = NULL, str ="" if not
 * resturn pointer to array of strings
*/
char **strtow(char *str)
{
char **strings;
int ind = 0, wrd, w, let, l;
if (str == NULL || str[0] == '\0')
return (NULL);
wrd = count_words(str);
if (wrd == 0)
return (NULL);
strings = malloc(sizeof(char *) * (wrd + 1));
if (strings == NULL)
return (NULL);
for (w = 0; w < wrd; w++)
{
while (str[ind] == ' ')
ind++;
let = word_len(str + ind);
strings [w] = malloc(sizeof(char) * (let + 1));
if  (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (l = 0; l < let; l++)
strings[w][l] = str[ind++];
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}
