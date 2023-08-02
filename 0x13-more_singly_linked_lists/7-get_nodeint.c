#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: ptr to the list
 * @index:index arg
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
