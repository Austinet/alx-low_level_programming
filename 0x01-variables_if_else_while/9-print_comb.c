#include <stdio.h>
/**
 * main - display numbers from 0 to 9 separated by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;

while (num < 10)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
