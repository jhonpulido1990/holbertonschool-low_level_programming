#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: header linked list
 * Return: count number nodos
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("(nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
