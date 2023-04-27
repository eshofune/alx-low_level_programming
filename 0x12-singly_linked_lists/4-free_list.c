#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a linked list
* @head: list_t list to be freed
*/

void free_list(list_t *head)
{
list_t *temp_node;
while ((temp_node = head) != NULL)
{
head = head->next;
free(temp_node->str);
free(temp_node);
}
}
