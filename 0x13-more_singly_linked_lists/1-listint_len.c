#include "lists.h"
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: ptr head to the list
 * Return: num elements of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
