#include <stdio.h>
/**
 * main - display hexadecimal digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
char ch = 'a';

while (num < 10)
{
putchar(num + '0');
num++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}

