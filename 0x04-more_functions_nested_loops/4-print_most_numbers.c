#include "main.h"
/**
 * print_most_numbers - prints all digits from 0 to 9 except 2 and  4
 *
 * Return: 0 as success
 */
void print_most_numbers(void)
{
int num = 0;
while (num <= 9)
{
if (num != 2 && num != 4)
{
_putchar(num + '0');
}
num++;
}
_putchar('\n');
}
