#include "main.h"
/**
 * print_square - prints a square of # characters
 * @size: the size of the square
 * Return: 0 as success
 */
void print_square(int size)
{
int i = size;
int j = size;
while (i > 0)
{
while (size > 0)
{
_putchar('#');
size--;
}
if (i != 1)
_putchar('\n');

size = j;
i--;
}
_putchar('\n');
}
