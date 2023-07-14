#include <stdio.h>
/**
 * main - display lower case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);
putchar('\n');
alphabet++;
}
return (0);
}
