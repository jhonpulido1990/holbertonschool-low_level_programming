#include "lists.h"
/**
 * @brief 
 * 
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head == NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
