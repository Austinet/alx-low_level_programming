#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes.
 * initializes it with 0
 * @nmemb: number of elements
 * @size: size of each element bytes
 * Return: a pointer to the allocated memory or NULL if unsuccessful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;

if (size <= 0 || nmemb <= 0)
return (NULL);

arr = malloc(size * nmemb);

if (arr == NULL)
return (NULL);

for (i = 0; i < nmemb; i++)
{
arr[i] = 0;
}

return (arr);
}
