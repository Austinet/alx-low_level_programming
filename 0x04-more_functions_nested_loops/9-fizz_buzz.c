#include <stdio.h>
/**
 * main - entry point
 * Return: 0 as success
 */
void fizzbuzz(void);
int main(void)
{
fizzbuzz();
return (0);
}
/**
 * fizzbuzz - prints 1 to 100, fizz for multiples of 3
 * bizz for multiples of 5, and fizzbuzz for multiples
 * of both
 * Return: void
 */
void fizzbuzz(void)
{
int num = 1;
while (num <= 100)
{
if ((num % 5 == 0) && (num % 3 == 0))
{
printf("%s ", "FizzBuzz");
}
else if (num % 3 == 0)
{
printf("%s ", "Fizz");
}
else if (num % 5 == 0)
{
printf("%s ", "Buzz");
}
else
{
printf("%d ", num);
}
num++;
}
putchar('\n');
}
