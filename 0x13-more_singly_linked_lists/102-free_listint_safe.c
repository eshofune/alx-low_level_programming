#include "lists.h"
#include <stdio.h>

/**
* free_listint_safe - frees a listint_safe list
* @h: pointer to the first node in the listint_t list
* Return: number of elements in freed listint_t list
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
int i;
listint_t *temp_node;

if (!h || !*h)
return (0);
while (*h)
{
i = *h - (*h)->next;
if (i > 0)
{
temp_node = (*h)->next;
free(*h);
*h = temp_node;
count++;
}
else
{
free(*h);
*h = NULL;
count++;
break;
}
}
*h = NULL;
return (count);
}
