#include "lists.h"
/**
  * listint_len - function return element of the struct list
  * @h: pointer for the struct
  * Return: the length of the element
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
