#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - displays numbers sequentially to 98
 * @n: number to printf from
 * Return: numbers from n to 98
 */
void print_to_98(int n)
{
int num;
if (n <= 98)
{
for (num = n; num <= 98; num++)
{
printf("%d", num);
if (num < 98)
{
printf(", ");
}
}
}
else
{
for (num = n; num >= 98; num--)
{
printf("%d", num);
if (num > 98)
{
printf(", ");
}
}
}
putchar('\n');
}
