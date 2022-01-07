#include "lists.h"
/**
 * delete_dnodeint_at_index - delecte node in position of index
 * @head: likend list
 * @index: position of node
 * Return: delecte node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
    unsigned int i = 0;

    if (*head == NULL || head == NULL)
        return (-1);

    current = *head;
    if (i > index)
    {
        return (-1);
    }

    while (i < index)
    {
        current = current->next;
        if (current == NULL)
            return (-1);
        i++;
    }
    if (current == *head)
        *head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    return (1);
}
