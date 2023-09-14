#include "lists.h"
/**
  * add_nodeint_end - function that add a new node at the end
  * @head: pointer of pointer to the struct
  * @n: element for the new end
  * Return: NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = *head;

	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;

	newNode->next = NULL;

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (*head);
}
