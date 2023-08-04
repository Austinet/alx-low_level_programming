#include "main.h"
/**
 * _islower - checks if a character is lower case or not.
 * @c : parameter to check if lower case or not
 * Return: 1 if lower case, 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
