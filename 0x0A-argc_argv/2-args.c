#include <stdio.h>
/**
 * main - prints the arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: arguments passed
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
