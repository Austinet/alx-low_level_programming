#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
/* *s points to the address of the first element*/
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(++s); /* point to the address of the next element*/
}
_putchar('\n');
}

