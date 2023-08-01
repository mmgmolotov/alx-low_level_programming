#include "lists.h"
/**
 * pop_listint -  function that deletes the head node
 * of a listint_t linked list
 * @head: ptr to the list
 * Return: 0 if empty otherwise 1
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
