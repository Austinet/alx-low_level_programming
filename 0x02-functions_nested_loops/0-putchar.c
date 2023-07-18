#include <unistd.h>
/**
 * _putchar - print characters to standard output
 *
 * @c : parameter of char datatype
 * Return: Always 0.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
