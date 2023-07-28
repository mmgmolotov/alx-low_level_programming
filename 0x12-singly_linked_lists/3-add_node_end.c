#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head:ptr to the list
 * @str:ptr to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end;
	size_t len;

	len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	while (str[len])
		len++;
	new_node->len = len;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new_node;
	}
	return (new_node);
}
