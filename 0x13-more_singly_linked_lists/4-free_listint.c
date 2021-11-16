#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
