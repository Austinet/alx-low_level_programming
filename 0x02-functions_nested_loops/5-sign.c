#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n : parameter to check if positive, negative, or 0
 * Return: 1 if positive, -1 if negative, 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
