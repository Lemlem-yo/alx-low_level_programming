#include "lists.h"

/**
 * sum_dlistint - function that sum all the data
 * @head: pointer to the node
 * Return: integers
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
