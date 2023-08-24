#include "lists.h"
/**
 * list_len - calculates the number of elements in a linked list_t list.
 * @h: linked list_t list.
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}
