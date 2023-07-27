#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: ptr to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n"; 0, "(nil)");
		}
		h = h->next;
		count++;
	}
	return (count);
}
