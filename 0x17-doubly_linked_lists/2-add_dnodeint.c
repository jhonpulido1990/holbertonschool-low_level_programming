#include "lists.h"
/**
 * add_dnodeint - add data to the list
 * @head: likend list
 * @n: data to add
 * Return: new likend list
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list;

	if (head == NULL)
		return (NULL);
	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = *head;
	new_list->prev = NULL;
	*head = new_list;
	if (new_list->next != NULL)
	{
		(new_list->next)->prev = new_list;
	}
	return (new_list);
}
