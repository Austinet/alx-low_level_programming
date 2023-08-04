#include "main.h"
/**
 * _strncat - concatenates two strings, it uses at most n bytes from src
 * @dest: destination string to concatenate the result
 * @src: source string to concatenate
 * @n: number of bytes from src to be concatenated to dest
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
i++;

for (j = 0; src[j] != '\0' && n > 0; j++)
{
dest[i] = src[j];
i++;
n--;
}

return (dest);
}
