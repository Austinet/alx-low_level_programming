#include "main.h"
/**
 * _memcpy - copy a string to another destination
 * @dest: char array or string to copy to
 * @src: char array to copy from
 * @n: number of characters to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *cpy;
cpy = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (cpy);
}
