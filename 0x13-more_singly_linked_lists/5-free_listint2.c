#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: ptr to the h list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
