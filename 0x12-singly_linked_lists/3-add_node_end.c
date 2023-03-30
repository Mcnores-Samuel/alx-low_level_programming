#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: head pointer
 *@str: string to add
 *
 *Return: address of new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node, *ptr;
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
n_node->next = NULL;

if (*head == NULL)
{
*head = n_node;
return (n_node);
}

ptr = *head;

for (; ptr->next; i++)

ptr = ptr->next;
ptr->next = n_node;

return (n_node);
}
