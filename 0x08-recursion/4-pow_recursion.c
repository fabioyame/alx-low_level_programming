#include "main.h"

/**
 * _pow_recursion -Teh function that gives power of int
 *
 * @x: The integer to power
 * @y: The power to do
 *
 * Return: An integer value
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
