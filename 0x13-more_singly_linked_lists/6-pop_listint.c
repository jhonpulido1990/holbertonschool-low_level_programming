#include "lists.h"
/**
 * pop_listint - deletes head node of a listint_t linked list
 * @head: header linked list
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	int a = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	a = temp->n;
	*head = temp->next;
	free(temp);
	return (a);
}
