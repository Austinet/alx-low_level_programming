#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string or
 * NULL if unsuccessful
 */
char *str_concat(char *s1, char *s2)
{
char *conc;
int k, l;
int i = 0;
int j = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;

conc = malloc(sizeof(char) * (++j + i));

if (conc == NULL)
return (NULL);

for (l = 0, k = 0; l < (i + j); l++)
{
if (l < i)
conc[l] = s1[l];
else
conc[l] = s2[k++];
}
conc[l] = '\0';

return (conc);
}
