#include "lists.h"
/**
 * print_dlistint - print elements of likend
 * @h: likend list
 * Return: count list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
