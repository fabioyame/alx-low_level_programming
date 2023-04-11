#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - main function
 *
 * @c: character to be check
 *
 * Return: 1 if true, 0 for anything else
 */

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
