#include "lists.h"
/**
 * @brief 
 * 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int a = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	temp = *head;
	while (a < idx -1)
	{
		temp = temp->next;
		a++;
	}
	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
