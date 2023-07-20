#include "main.h"
/**
 * print_line - prints a line determined by the number of underscore
 *@n : determines the length of the line
 * Return: 0 as success
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
