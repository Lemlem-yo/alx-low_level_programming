#include "lists.h"
/**
  * get_nodeint_at_index - function that return the nth node of a list
  * @head: pointer for the strunct
  * @index: count for the nth node
  * Return: NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *trav;

	if (head == NULL)
		return (NULL);

	trav = head;
	while (trav != NULL)
	{
		trav = trav->next;
		count++;
	}
	if (index > count)
		return (NULL);

	trav = head;
	count = 0;

	while (count != index)
	{
		trav = trav->next;
		count++;
	}
	return (trav);

}
