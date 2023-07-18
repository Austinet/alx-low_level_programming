#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num : parameter to print the last digit
 * Return: last digit of the number
 */
int print_last_digit(int num)
{
_putchar('0' + (num % 10));
return (num % 10);
}
