#include "lists.h"
/**
  * add_nodeint - funtion that adds a new node at the beginning
  * @head: pointer to pointet for the list
  * @n: element for the new node
  * Return: Null
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
