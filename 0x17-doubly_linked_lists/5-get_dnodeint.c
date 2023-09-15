#include "lists.h"

/**
 * get_dnodeint_at_index - function that find the value of the give node index
 * @head: pointer for the node
 * @index: index number
 * Return: value of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
