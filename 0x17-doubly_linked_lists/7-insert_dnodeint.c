#include "lists.h"

/**
 * insert_dnodeint_at_index - function add node to specific location
 * @head: pointer to the node
 * @idx: integer for the index
 * @n: element value
 * Return: NULL or new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int countIndex = 0;
	dlistint_t *new_node = NULL;
	dlistint_t *current = *h;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL)
	{
		if (countIndex == idx - 1)
		{
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
		countIndex++;
	}

	if (countIndex == idx)
	{
		current->next = new_node;
		new_node->prev = current;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
