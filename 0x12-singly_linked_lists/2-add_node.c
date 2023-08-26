#include <string.h>
#include <stdlib.h>
#include "lists.h"

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
	unsigned int len = 0;

	while (str[len])
		len++;
	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = len;
	list->next = (*head);
	(*head) = list;

	return (*head);
}
