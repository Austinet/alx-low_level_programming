#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result of multiplying the two numbers or
 * Error if the numbers are not supplied
 */
int main(int argc, char *argv[])
{
int mul;

if (argc < 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
mul = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
printf("%d\n", mul);
}
return (0);
}
