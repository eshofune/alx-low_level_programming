#include "lists.h"
/**
* add_nodeint_end - adds a node to the end of a listint_t list
* @head: pointer to the first node on the listint_t list
* @n: data to add into the new node
* Return: pointer to the new nodes, or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp_node = *head;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (temp_node->next)
temp_node = temp_node->next;
temp_node->next = new_node;
return (new_node);
}
