#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head singly linked list
 * @str: string
 * Return: always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	/*create a new node*/
	list_t *newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (0);
}
