#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: header of nodo
 * @index: position of get data
 * Return: data of nodo select
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a < index)
	{

		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		a++;
	}
	return (head);
}
