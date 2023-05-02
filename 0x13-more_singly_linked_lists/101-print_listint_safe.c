#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts how many unique nodes
 * are in a looped listint_t list
 * @head: A pointer to the first element in the listint_t list
 *
 * Return: 0 if list is not looped.
 * Else - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *nod1, *nod2;
size_t node = 1;
if (head == NULL || head->next == NULL)
return (0);
nod1 = head->next;
nod2 = (head->next)->next;
while (nod2)
{
if (nod1 == nod2)
{
nod1 = head;
while (nod1 != nod2)
{
node++;
nod1 = nod1->next;
nod2 = nod2->next;
}
nod1 = nod1->next;
while (nod1 != nod2)
{
node++;
nod1 = nod1->next;
}
return (node);
}
nod1 = nod1->next;
nod2 = (nod2->next)->next;
}
return (0);
}

/**
* print_listint_safe - Prints a listint_t list safely.
* @head: A pointer to the head of the listint_t list.
*
* Return: Number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t node, index = 0;
node = looped_listint_len(head);
if (node == 0)
{
for (; head != NULL; node++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < node; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (node);
}
