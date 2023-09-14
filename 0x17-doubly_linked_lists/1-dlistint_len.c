#include "lists.h"
/**
  * dlistint_len - function that return the elements
  * @h: head of double list
  * Return: node
  */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
