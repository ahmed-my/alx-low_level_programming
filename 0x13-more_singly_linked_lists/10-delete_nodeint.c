#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete a node
 * @head: pointer to listint_t
 * @index: node index to delete
 * Return: succeeded(1) failed(-1)
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *position = NULL;
	listint_t *tmp = *head;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (num < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		num++;
	}
	position = tmp->next;
	tmp->next = position->next;
	free(position);
	return (1);
}
