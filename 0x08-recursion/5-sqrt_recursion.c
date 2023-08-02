#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the integer number
 * Return: the natural square root of n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
return (checkSqrt(n, 1));
}

/**
 * checkSqrt - checks if the number is the square root
 * @num: the integer number
 * @i: then index to square to determine if it's the square root
 * Return: the natural square root of num or -1 if it doesn't exist
 */
int checkSqrt(int num, int i)
{
if (i * i == num)
return (i);
else if (i * i < num)
return (checkSqrt(num, i + 1));
else
return (-1);
}
