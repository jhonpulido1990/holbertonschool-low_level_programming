#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of node
 * @idx: position of node
 * @n: data to save
 * Return: adress of newNode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	temp = *head;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (a < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free (temp);
			return (NULL);
		}
		a++;
	}
	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
