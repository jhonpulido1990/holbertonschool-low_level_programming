#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: data
 * Return: return count
 */
size_t print_list(const list_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
