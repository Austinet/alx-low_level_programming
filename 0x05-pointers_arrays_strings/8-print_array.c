#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: the array to be printed
 * @n: the length of the array
 * Return: 0
 */
void print_array(int *a, int n)
{
int i, len;
int j = 0;

while (a[j] != '\0')
{
j++;
}
j--;

if (j == n)
{
len = n;
}
else
{
len = j;
}

for (i = 0; i < len; i++)
{
if (i < (len - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
