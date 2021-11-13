#include "lists.h"
/**
 * @brief 
 * 
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tail;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
	return (newNode);
}
