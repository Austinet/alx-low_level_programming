#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lower case ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char lowerCase = 'a';
int num = 1;

while (num <= 10)
{
while (lowerCase <= 'z')
{
_putchar(lowerCase);
lowerCase++;
}
_putchar('\n');
lowercase = 'a';
num++;
}
}
