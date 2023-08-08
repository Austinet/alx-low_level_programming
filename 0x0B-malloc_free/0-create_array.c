#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: the character to fill the array with
 * Return: a pointer to the array or NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
char *arr;
int i;
arr = malloc(sizeof(c) * size);

if ((size <= 0) || (arr == NULL))
return (NULL);

for (i = 0; i < (int) size; i++)
{
arr[i] = c;
}
arr[i] = '\0';
return (arr);
}
