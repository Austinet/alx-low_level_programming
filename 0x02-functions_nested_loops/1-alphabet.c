#include "main.h"
/**
 * print_alphabet - print alphabets in lower case
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char lowerCase = 'a';
while (lowerCase <= 'z')
{
_putchar(lowerCase);
lowerCase++;
}
_putchar('\n');
}
