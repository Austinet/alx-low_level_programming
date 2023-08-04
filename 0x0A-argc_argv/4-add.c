#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result of adding the mumbers, 0 if no
 * number was passed, Error if it contains non-digit
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
/* Checks for non digit */
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
