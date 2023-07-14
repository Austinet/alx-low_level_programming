#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - display the last digit of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;

if (last > 5)
printf("Last digit of %d is %i %s\n", n, last, "and is greater than 5");
else if (last == 0)
printf("Last digit of %d is %i %s\n", n, last, "and is 0");
else
printf("Last digit of %d is %i %s\n", n, last, "and is less than 6 and not 0");
return (0);
}
