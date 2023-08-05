/**
 * _memset - fills memory with a specified byte
 * @s: buffer array
 * @b: specified byte
 * @n: number of memory bytes to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
