#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: number of arguments passed
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%i\n", argc - 1);
return (0);
}
