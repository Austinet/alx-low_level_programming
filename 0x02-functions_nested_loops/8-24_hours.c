#include "main.h"
/**
 * jack_bauer - prints 24 hours
 *
 * Return: 24 hours including minutes
 */
void jack_bauer(void)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
int x;
while (l < 3)
{
while (k < 10)
{
while (j < 6)
{
while (i < 10)
{
_putchar(l + '0');
_putchar(k + '0');
_putchar(':');
_putchar(j + '0');
_putchar(i + '0');
_putchar('\n');
x++;
i++;
if (l == 2 && k == 3 && j == 5 && i == 10)
{
l = 3;
j = 6;
k = 10;
i = 10;
}
}
i = 0;
j++;
}
j = 0;
k++;
}
k = 0;
l++;
