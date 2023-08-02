#include "lists.h"
/**
 * reverse_listint -  function that reverses
 * a listint_t linked list.
 * @head: ptr to the head list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *s, *e;

	if (head == NULL || *head == NULL)
		return (NULL);
	e = NULL;
	while ((*head)->next != NULL)
	{
		s = (*head)->next;
		(*head)->next = e;
		e = *head;
		*head = s;
	}
	(*head)->next = e;
	return (*head);
}
