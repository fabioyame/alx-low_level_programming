#include "main.h"
/**
 * main - To check if a number is positive or negative or zero
 * 0 : is the number to check
 *
 * Return - 0 on success
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if  (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;

}
