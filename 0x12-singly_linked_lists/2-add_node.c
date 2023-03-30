#include "lists.h"
#include <string.h>

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: head pointer
 *@str: string to add
 *
 *Return: address of new element
 */


list_t *add_node(list_t **head, const char *str)
{
list_t *n_node;
unsigned int i = 0;

if (str == NULL)
return (NULL);

n_node = malloc(sizeof(list_t));
if (n_node == NULL)
return (NULL);

n_node->str = strdup(str);
if (n_node->str == NULL)
{
free(n_node);
return (NULL);
}

while (n_node->str[i])
{
i++;
}
n_node->len = i;
n_node->next = *head;
*head = n_node;

return (n_node);
}
