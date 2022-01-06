#include "lists.h"
/**
 * add_dnodeint_end - add data in end the list
 * @head: likend list
 * @n: data
 * Return: new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list;
	dlistint_t *pre_list;

	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = NULL;
	new_list->prev = NULL;
	if (*head == NULL)
	{
		new_list->next = *head;
		*head = new_list;
	}
	else
	{
		pre_list = *head;
		while (pre_list->next != NULL)
		{
			pre_list = pre_list->next;
		}
		pre_list->next = new_list;
		new_list->prev = pre_list;
	}
	return (*head);
}
