#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: ptr to the h list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	head =tmp
	if (head == NULL)
		return (NULL);

	while (*head)
	{
		*head = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
