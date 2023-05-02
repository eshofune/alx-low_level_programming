#include "lists.h"
/**
* get_nodeint_at_index - returns the node at a certain index
* in a listint_t list
* @head: first element (node) in the listint_t list
* @index: index of the node to be returned
* Return: pointer to the node we need or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
listint_t *temp_node = head;
while (temp_node && n < index)
{
temp_node = temp_node->next;
n++;
}
return (temp_node ? temp_node : NULL);
}
