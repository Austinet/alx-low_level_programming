#include "main.h"
/**
 * more_numbers - prints 1 to 14 ten times
 *
 * Return: 0 as success
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
int k = 1;
int l = 0;
while (j < 10)
{
while (i < 10)
{
_putchar(i + '0');
i++;
}
while (l < 5)
{
_putchar(k + '0');
_putchar(l + '0');
l++;
}
l = 0;
_putchar('\n');
i = 0;
j++;
}
}
