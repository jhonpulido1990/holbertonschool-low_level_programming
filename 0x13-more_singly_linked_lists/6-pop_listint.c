#include "lists.h"
/**
 * @brief 
 * 
 */
int pop_listint(listint_t **head)
{
	int a = 0;

	listint_t *temp = *head;
	*head = temp->next;
	a = temp->n;
	free(temp);
	return (a);	
}
