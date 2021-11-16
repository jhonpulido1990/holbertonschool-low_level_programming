#include "lists.h"
/**
 * delecte_nodeint_at_index - 
 * 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *temp, *next;

	if (head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}
	for (counter = 0; temp != NULL && counter < index - 1; counter++)
	{
		temp = temp->next;
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
