#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string to print second half
 * Return: 0
 */
void puts_half(char *str)
{
int i = 0;
int len;
while (str[i] != '\0')
{
i++;
}

if (i % 2 == 0)
{
i = i / 2;
}
else
{
len = (i - 1) / 2;
i = i - len;
}

for (; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
