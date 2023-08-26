#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node 
 * @head: pointer to pointer to the list_t list
 * @str: string to be added 
 *
 * Return: address of the element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	unsigned int length = 0;

	while (str[length])
		length++;
	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->length = length;
	list->next = (*head);
	(*head) = list;

	return (*head);
}
