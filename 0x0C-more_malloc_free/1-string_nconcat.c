#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings,
 * the first string followed by the first n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes from the second string
 * Return: a pointer to the concatenated string or
 * NULL if unsuccessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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

if (j > n)
j = n;

conc = malloc(sizeof(char) * (j + i + 1));

if (conc == NULL)
return (NULL);

for (l = 0, k = 0; l < (i + j + 1); l++)
{
if (l < i)
conc[l] = s1[l];
else if ((l >= i)&&(s2[k]))
conc[l] = s2[k++];
}
conc[l] = '\0';

return (conc);
}
