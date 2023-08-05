#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: char array string
 * @accept: char array to match bytes
 * Return: number of bytes in the initial segment of the array s
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, k;
i = 0;
k = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
k++;
break;
}
j++;
}

if (accept[j] == '\0')
{
break;
}
i++;
}
return (k);
}
