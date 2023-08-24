#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the head of the linked list
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
int i = 0;
char *dupStr;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);

dupStr = strdup(str);
if (dupStr == NULL)
{
free(newNode);
return (NULL);
}

while (str[i])
i++;

newNode->str = dupStr;
newNode->len = i;
newNode->next = *head;

*head = newNode;
return (newNode);
}
