#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: character to locate
 * Return: first occurrence of the character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else if (*(s + 1) == c)
{
return (s + 1);
}
s++;
}
return (s + 1);
}
