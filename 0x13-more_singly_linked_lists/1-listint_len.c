#include "lists.h"

/**
* listint_len - returns number of elements in a listint_t list
* @h: pointer to listint_t list
* Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
