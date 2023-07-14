#include <stdio.h>
/**
 * main - display lowercase alphabets in descending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 'z';

while (lower >= 'a')
{
putchar(lower);
lower--;
}
putchar('\n');
return (0);
}
