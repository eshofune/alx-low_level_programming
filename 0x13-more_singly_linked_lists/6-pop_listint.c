#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t list
*
* @head: pointer to the first element in the listint_t list
* Return: the data that was deleted or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp_node;
int i;
if (!head || !*head)
return (0);
i = (*head)->n;
temp_node = (*head)->next;
free(*head);
(*head) = temp_node;
return (i);
}
