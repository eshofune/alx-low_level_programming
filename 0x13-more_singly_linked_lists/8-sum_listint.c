#include "lists.h"
/**
* sum_listint - adds all of the data (n) of a listint_t list
* @head: first element (node) in the listint_t list
* Return: result (sum)
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp_node = head;
while (temp_node)
{
sum += temp_node->n;
temp_node = temp_node->next;
}
return (sum);
}
