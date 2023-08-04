#include "main.h"
/**
 * _isdigit - checks if a character is a digit or not.
 * @c : parameter to check if character is digit or not
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
