#include "lists.h"

/**
 * reverse_listint -function that  prints
 * a listint_t linked list.
 * @head: ptr to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t sec = 0;
	const listint_t *s_node = head;

	if (!head)
		exit(98);

	while (s_node)
	{
		printf("[%p] %i\n", (void *)s_node, s_node->n);
		s_node = s_node->next;
		sec++;
	}
	return (sec);
}
