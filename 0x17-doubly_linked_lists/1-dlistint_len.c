#include "lists.h"
/**
 * dlistint_len - count likend list
 * @h: list
 * Return: count
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
