#include "lists.h"
/**
  * insert_nodeint_at_index - function that inserts a new node
  * @head: pointer of pointer for the struct
  * @idx: the index of the list where the new node should be added
  * @n: int value to iterate
  * Return: pointer
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newNode, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	temp = *head;

	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	if (idx > i)
		return (NULL);
	newNode = *head;
	for (i = 0; i != idx - 1; i++)
		newNode = newNode->next;
	temp = newNode->next;
	newNode->next  = new;
	new->next = temp;

	return (new);

}

