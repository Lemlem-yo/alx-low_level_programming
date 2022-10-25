#include "lists.h"
/**
  * pop_listint - function that deletes the head node of the list
  * @head: pointer of pointer for the struct
  * Return: 0, int
  */
int pop_listint(listint_t **head)
{
	listint_t *toDelete;

	int holder;

	toDelete = *head;

	if (*head == NULL || head == NULL)
		return (0);

	holder = toDelete->n;

	*head = (**head).next;

	free(toDelete);

	return (holder);
}
