#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all it's parameters
 * @n: number of parameters
 * Return: the sumn of all it's parameters, or 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(list, n);
for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);

return (sum);
}
