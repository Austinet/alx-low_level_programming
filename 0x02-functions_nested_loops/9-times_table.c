#include "main.h"
/**
 * times_table - displays the 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
int i;
int j;
int product;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
product = i * j;
if (product > 9)
{
putchar((product / 10) + '0');
putchar((product % 10) + '0');
}
else
{
putchar(product + '0');
}
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
