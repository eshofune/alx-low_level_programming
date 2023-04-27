#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* add_node_end - adds a new node at the beginning of a linked list
* @head: double pointer to the list_t list
* @str: new string to add in the node
*
* Return: the address of the new element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp_node;
size_t i;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
for (i = 0; str[i]; i++)
;
new_node->len = i;
new_node->next = NULL;
temp_node = *head;
if (temp_node == NULL)
{
*head = new_node;
}
else
{
while (temp_node->next != NULL)
temp_node = temp_node->next;
temp_node->next = new_node;
}
return (*head);
}
