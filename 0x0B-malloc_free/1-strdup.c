#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: a pointer to the duplicated string or NULL
 * if unsuccessful
 */
char *_strdup(char *str)
{
char *copy;
int i, j;
i = 0;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

i++;
copy = malloc(sizeof(char) * i);

if (copy == NULL)
return (NULL);

for (j = 0; j < i; j++)
copy[j] = str[j];

copy[j] = '\0';

return (copy);
}
