#include "lists.h"

/**
 * free_dlistint - function free the list
 * @head: pointer of the node
 * Return: Non
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
