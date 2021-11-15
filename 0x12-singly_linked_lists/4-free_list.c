#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: linked list to free
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head == NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
