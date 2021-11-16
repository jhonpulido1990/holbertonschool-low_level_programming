#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of node
 * @index: position of node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = *head, *next = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (counter = 0; temp != NULL && counter < index - 1; counter++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
