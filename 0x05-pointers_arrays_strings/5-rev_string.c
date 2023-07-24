#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 **/
void rev_string(char *s)
{
int i = 0;

/*calculates the string length*/
while (s[i] != '\0')
{
i++;
}
i--;
char str[i];
int j = 0;

/*swaps the string in reverse*/
for (; i >= 0; i--)
{
str[j] = s[i];
j++;
}
for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
}
