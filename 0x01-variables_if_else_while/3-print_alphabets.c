#include <stdio.h>
/**
 * main - display lower and upper case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 'a';
char upper = 'A';

while (upper <= 'Z')
{
while (lower <= 'z')
{
putchar(lower);
lower++;
}
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
