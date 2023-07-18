#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num : parameter to print the last digit
 * Return: last digit of the number
 */
int print_last_digit(int num)
{
if (num > 0)
{
_putchar('0' + (num % 10));
return (num % 10);
}
else
{
_putchar('0' + -(num % 10));
return (-(num % 10));
}
}
