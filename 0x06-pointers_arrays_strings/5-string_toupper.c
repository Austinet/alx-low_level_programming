#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to convert to uppercase
 * Return: string in uppercase
 */
char *string_toupper(char *str)
{
int i, calc;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] > 'Z')
{
calc = str[i] - 'Z' - 7;
str[i] = 'A' + calc;
}
}
return (str);
}
