#include "main.h"
/**
 * _isupper - checks if a character is upper case or not.
 * @c : parameter to check if upper case or not
 * Return: 1 if upper case, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
