#include "lists.h"

/**
 * print_listint_safe -function that  prints
 * a listint_t linked list.
 * @head: ptr to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmpn = NULL;
	const listint_t *ln = NULL;
	size_t counter = 0;
	size_t newn;

	tmpn = head;
	while (tmpn)
	{
		printf("[%p] %d\n", (void *)tmpn, tmpn->n);
		counter++;
		tmpn = tmpn->next;
		ln = head;
		newn = 0;
		while (newn < counter)
		{
			if (tmpn == ln)
			{
				printf("-> [%p] %d\n", (void *)tmpn, tmpn->n);
				return (counter);
			}
			ln = ln->next;
			newn++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
