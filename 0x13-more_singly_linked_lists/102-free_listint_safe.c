#include "lists.h"
/**
 * free_listint_safe - function to free a linked list
 * @h: pointer to pointer listint_t
 * Return: size of the list that was freed
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int num;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}
	*h = NULL;
	return (lenght);
}
