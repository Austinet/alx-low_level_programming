#include "main.h"
/**
 * print_numbers - prints all digits from 0 to 9
 *
 * Return: 0 as success
 */
void print_numbers(void)
{
int num = 0;
while (num <= 9)
{
_putchar(num + '0');
num++;
}
putchar('\0');
}
