#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted to an integer
 *
 * Return: the integer value of the converted string.
 */
int _atoi(char *s)
{
int i;
int num, sign;

num = 0;
sign = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign *= -1;

if (s[i] > 47 && s[i] < 58)
{
if (num < 0)
num = (num * 10) - (s[i] - '0');
else
num = (s[i] - '0') * -1;

if (s[i + 1] < 48 || s[i + 1] > 57)
break;
}
}
if (sign < 0)
num *= -1;

return (num);
}

