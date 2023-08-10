#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: a pointer to the allocated memory, if malloc fails,
 * it causes normal process termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
char *mem;

mem = malloc(b);
if (mem == NULL)
exit(98);

return (mem);
}
