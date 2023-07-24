#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Return: 0
 */
void print_rev(char *s)
{
int i = 0;

/*calculates the string length*/
while (s[i] != '\0')
{
i++;
}
/*Removes the \0 character */
i--;
/*Prints the string in reverse*/
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
