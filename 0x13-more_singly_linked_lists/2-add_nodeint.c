#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: header
 * @n: data integer
 * Return: adress of header
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create a new node*/
	listint_t *newNode = malloc(sizeof(struct listint_s));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
