#include "main.h"
/**
 * factorial - calculates the factorial of an integer
 * @n: number of type integer
 * Return: n factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
{
if (n <= 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
}
