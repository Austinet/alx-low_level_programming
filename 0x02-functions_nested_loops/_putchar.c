#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints characters to standard output
 * @c : takes c of character datatype as parameter
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
