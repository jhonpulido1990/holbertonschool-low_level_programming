#include "lists.h"
/**
 * list_len - number of elements in a linked list_t list
 * @h: input data
 * Return: leng string
 */
size_t list_len(const list_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
