#include "lists.h"
/**
 * get_dnodeint_at_index - search node
 * @head: likend list
 * @index: number the position node
 * Return: position node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		i++;
	}
	return (head);
}
