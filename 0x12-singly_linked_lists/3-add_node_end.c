#include "lish.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add new node
 * @head: pointer to pointer
 * @str: string in the new node
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *list;
	list_t *tmp = *head;
	
	while (str[length])
		length++;
	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);
	list->str = strdup(str);
	list->length = length;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = list;
	return (list);
}

