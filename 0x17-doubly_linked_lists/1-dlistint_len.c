#include "lists.h"

/**
 * dlistint_len - prints a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node;
	int count;

	node = 0;
	count = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		node++;
		count++;
	}

	return (count);
}
