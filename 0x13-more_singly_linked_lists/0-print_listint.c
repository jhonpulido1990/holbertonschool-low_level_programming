#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: header linked list
 * Return: count number nodos
 */
size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
