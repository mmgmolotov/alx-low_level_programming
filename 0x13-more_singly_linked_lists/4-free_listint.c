#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: ptr to the head list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
