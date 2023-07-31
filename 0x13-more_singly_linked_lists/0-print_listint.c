#include "lists.h"
/**
 * print_listint - function that prints all
 * the elements of a listint_t list.
 * @h: ptr head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
