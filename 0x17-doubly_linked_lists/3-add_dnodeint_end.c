#include "lists.h"

/**
 * add_dnodeint_end - function add node at the end
 * @head: pointer to pointer parameter
 * @n: the data hold in node
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_add, *traverse;

	new_add = malloc(sizeof(dlistint_t));
	if (new_add == NULL)
		return (NULL);

	new_add->prev = NULL;
	new_add->next = NULL;
	new_add->n = n;

	if (*head == NULL)
	{
		*head = new_add;
		return (new_add);
	}

	traverse = *head;
	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new_add;
	new_add->prev = traverse;
	return (new_add);
}
