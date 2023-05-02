#include "lists.h"
#include <stdio.h>

/**
* find_listint_loop - finds the loop in a listint_t list
* @head: first node in the listint_t list to search
* Return: adress of node where loop starts, or NULL if no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *start = head;
listint_t *stop = head;
if (!head)
return (NULL);
while (start && stop && stop->next)
{
stop = stop->next->next;
start = start->next;
if (stop == start)
{
start = head;
while (start != stop)
{
start = start->next;
stop = stop->next;
}
return (stop);
}
}
return (NULL);
}
