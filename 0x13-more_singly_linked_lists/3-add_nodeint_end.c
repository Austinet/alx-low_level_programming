#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head of the linked list
 * @n: data of the new node of type int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *lastNode;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
}
else
{
lastNode = *head;
while (lastNode->next != NULL)
lastNode = lastNode->next;

lastNode->next = newNode;
}

return (newNode);
}
