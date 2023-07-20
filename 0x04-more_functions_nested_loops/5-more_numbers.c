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

while (j < 10)
{
while (i < 15)
{
if (i >= 10)
putchar((i / 10) + '0');

putchar((i % 10) + '0');
i++;
}
putchar('\n');
i = 0;
j++;
}
}
