#include "main.h"
/**
 * _puts - prints string to standard output
 * @str: string to be printed
 * Return: Always 0
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
