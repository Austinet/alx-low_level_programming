#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n : determines the length of the line
 * Return: 0 as success
 */
void print_diagonal(int n)
{
int space = 0;
int j;
int k = n;
while (n > 0)
{
_putchar('\\');
if (space != (k - 1))
{
_putchar('\n');
for (j = 0; j <= space; j++)
{
_putchar(' ');
}
}
space++;
n--;
}
_putchar('\n');
}
